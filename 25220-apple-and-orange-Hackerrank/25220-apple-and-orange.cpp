#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'countApplesAndOranges' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER s
 *  2. INTEGER t
 *  3. INTEGER a
 *  4. INTEGER b
 *  5. INTEGER_ARRAY apples
 *  6. INTEGER_ARRAY oranges
 */
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int appleCount = 0;
    int orangeCount = 0;

    // 1. Calculate landing spots for apples
    for (int i = 0; i < apples.size(); i++) {
        int landing = a + apples[i];
        if (landing >= s && landing <= t) {
            appleCount++;
        }
    }

    // 2. Calculate landing spots for oranges
    for (int i = 0; i < oranges.size(); i++) {
        int landing = b + oranges[i];
        if (landing >= s && landing <= t) {
            orangeCount++;
        }
    }

    // 3. Print the results on separate lines
    cout << appleCount << endl;
    cout << orangeCount << endl;
}

int main() {
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int s = stoi(first_multiple_input[0]);
    int t = stoi(first_multiple_input[1]);

    string second_multiple_input_temp;
    getline(cin, second_multiple_input_temp);

    vector<string> second_multiple_input = split(rtrim(second_multiple_input_temp));

    int a = stoi(second_multiple_input[0]);
    int b = stoi(second_multiple_input[1]);

    string third_multiple_input_temp;
    getline(cin, third_multiple_input_temp);

    vector<string> third_multiple_input = split(rtrim(third_multiple_input_temp));

    int m = stoi(third_multiple_input[0]);
    int n = stoi(third_multiple_input[1]);

    string apples_temp_temp;
    getline(cin, apples_temp_temp);

    vector<string> apples_temp = split(rtrim(apples_temp_temp));

    vector<int> apples(m);

    for (int i = 0; i < m; i++) {
        int apples_item = stoi(apples_temp[i]);
        apples[i] = apples_item;
    }

    string oranges_temp_temp;
    getline(cin, oranges_temp_temp);

    vector<string> oranges_temp = split(rtrim(oranges_temp_temp));

    vector<int> oranges(n);

    for (int i = 0; i < n; i++) {
        int oranges_item = stoi(oranges_temp[i]);
        oranges[i] = oranges_item;
    }

    countApplesAndOranges(s, t, a, b, apples, oranges);

    return 0;
}

// Fixed and completed the truncated utility helper functions
string ltrim(const string &str) {
    string s(str);
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !isspace(ch);
    }));
    return s;
}

string rtrim(const string &str) {
    string s(str);
    s.erase(find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !isspace(ch);
    }).base(), s.end());
    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;
    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(' ', start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
    }

    tokens.push_back(str.substr(start));
    return tokens;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna