#include <iostream>
#include <vector>

int main() {
    int n;
    
    // Read the total number of elements
    if (std::cin >> n) {
        // Use a vector to dynamically allocate memory based on 'n' safely
        std::vector<int> arr(n);
        
        // Populate the array with sequential user inputs
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
        
        // Print the array elements in reverse order, separated by spaces
        for (int i = n - 1; i >= 0; i--) {
            std::cout << arr[i] << (i == 0 ? "" : " ");
        }
        std::cout << "\n";
    }
    
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna