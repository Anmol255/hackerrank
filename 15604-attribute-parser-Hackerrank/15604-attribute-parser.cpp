#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int n, q;
    if (!(cin >> n >> q)) return 0;
    cin.ignore(); // Clear the newline character after reading integers

    map<string, string> attribute_map;
    vector<string> tag_stack;

    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);

        // Check if it is a closing tag
        if (line.substr(0, 2) == "</") {
            if (!tag_stack.empty()) {
                tag_stack.pop_back();
            }
        } 
        // Processing an opening tag
        else {
            // Remove '<' and '>' to make parsing cleaner
            line = line.substr(1, line.length() - 2);
            stringstream ss(line);
            string tag_name;
            ss >> tag_name;

            // Push current tag onto stack
            tag_stack.push_back(tag_name);

            // Reconstruct the full hierarchical path for the map key
            string current_path = "";
            for (size_t j = 0; j < tag_stack.size(); ++j) {
                if (j > 0) current_path += ".";
                current_path += tag_stack[j];
            }

            // Extract all key-value attributes for this tag
            string attr_name, eq_sign, attr_value;
            while (ss >> attr_name >> eq_sign >> attr_value) {
                // Strip quotes from the value string (e.g., "value" -> value)
                if (attr_value.front() == '"') attr_value.erase(0, 1);
                if (attr_value.back() == '"') attr_value.pop_back();

                // Store in map using the format: tag1.tag2~attribute
                attribute_map[current_path + "~" + attr_name] = attr_value;
            }
        }
    }

    // Process and answer each query
    for (int i = 0; i < q; ++i) {
        string query;
        getline(cin, query);

        if (attribute_map.find(query) != attribute_map.end()) {
            cout << attribute_map[query] << "\n";
        } else {
            cout << "Not Found!\n";
        }
    }

    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna