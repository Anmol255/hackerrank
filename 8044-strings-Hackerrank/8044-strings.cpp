#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    // Read the two strings from standard input
    cin >> a >> b;

    // 1. Output the lengths of both strings separated by a space
    cout << a.size() << " " << b.size() << "\n";

    // 2. Output the concatenation of a and b
    cout << a + b << "\n";

    // 3. Swap the first characters of string a and string b
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    // Output the modified strings separated by a space
    cout << a << " " << b << "\n";

    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna