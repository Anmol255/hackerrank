#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;
    
    // Read the space-separated values from stdin
    cin >> i >> l >> c >> f >> d;
    
    // Print each value on a new line with exact decimal precision
    cout << i << "\n";
    cout << l << "\n";
    cout << c << "\n";
    
    // Set fixed decimal notation and precision for float
    cout << fixed << setprecision(3) << f << "\n";
    
    // Set precision for double
    cout << fixed << setprecision(9) << d << "\n";
    
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna