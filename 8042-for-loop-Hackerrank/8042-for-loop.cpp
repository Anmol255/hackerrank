#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    // Read the two positive integers
    cin >> a >> b;
    
    // Array map matching indexes 1 to 9
    string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    // Loop through the inclusive interval [a, b]
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            cout << words[i] << "\n";
        } 
        else if (i > 9 && i % 2 == 0) {
            cout << "even\n";
        } 
        else if (i > 9 && i % 2 != 0) {
            cout << "odd\n";
        }
    }
    
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna