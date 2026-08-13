

// Write your Student class here
#include <iostream>
#include <vector>
#include <numeric>

class Student {
private:
    // Instance variable to store 5 exam scores
    std::vector<int> scores;

public:
    // Reads 5 integers from stdin and saves them to scores
    void input() {
        scores.resize(5);
        for (int i = 0; i < 5; ++i) {
            std::cin >> scores[i];
        }
    }

    // Calculates and returns the sum of the student's scores
    int calculateTotalScore() {
        int total = 0;
        for (int score : scores) {
            total += score;
        }
        return total;
    }
};




// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna