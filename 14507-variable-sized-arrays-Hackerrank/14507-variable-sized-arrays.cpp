#include <iostream>
#include <vector>

int main() {
    // Optimise standard I/O operations for faster competitive programming execution
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, q;
    if (std::cin >> n >> q) {
        // Create a 2D vector to hold 'n' variable-length arrays
        std::vector<std::vector<int>> outer_array(n);

        // Populate the variable-length arrays
        for (int i = 0; i < n; i++) {
            int k;
            std::cin >> k; // Size of the current inner array
            
            outer_array[i].resize(k);
            for (int j = 0; j < k; j++) {
                std::cin >> outer_array[i][j];
            }
        }

        // Process each query
        for (int query = 0; query < q; query++) {
            int i, j;
            std::cin >> i >> j;
            // Print the element at index j of the array at index i
            std::cout << outer_array[i][j] << "\n";
        }
    }

    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna