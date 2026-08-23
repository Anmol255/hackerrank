#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main() {
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // ---- WRITE YOUR CODE HERE ----
    // Array map matching indexes 1 to 9
    // Array map matching indexes 1 to 9
string words[] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

if (n >= 1 && n <= 9) {
    cout << words[n] << endl;
} else if (n > 9) {
    // Fixed: Capitalised the letter 'G' to match HackerRank's exact requirements
    cout << "Greater than 9" << endl; 
}


    return 0;
}

// Keep the ltrim and rtrim functions provided by HackerRank below...
string ltrim(const string &str) {
    string s(str);
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](unsigned char ch) { return !std::isspace(ch); }));
    return s;
}

string rtrim(const string &str) {
    string s(str);
    s.erase(find_if(s.rbegin(), s.rend(), [](unsigned char ch) { return !std::isspace(ch); }).base(), s.end());
    return s;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna