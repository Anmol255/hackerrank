#include <iostream>
#include <string>

// Define the Student struct
struct Student {
    int age;
    std::string first_name;
    std::string last_name;
    int standard;
};

int main() {
    Student st;
    
    // Read the inputs in order: age, first_name, last_name, standard
    std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    
    // Output the format usually expected by this challenge (space-separated)
    std::cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard << std::endl;
    
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna