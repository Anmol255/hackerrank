#include <iostream>
#include <cmath>

// Function uses references (&) to modify the original variables directly
void update(int &a, int &b) {
    int sum = a + b;
    int diff = std::abs(a - b);
    a = sum;
    b = diff;
}

int main() {
    int a, b;
    
    // Read input using C++ standard input
    if (std::cin >> a >> b) {
        // Pass variables directly; references handle the memory addresses automatically
        update(a, b);
        
        // Print output using C++ standard output
        std::cout << a << "\n" << b << "\n";
    }
    
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna