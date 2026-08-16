

/* Define the exception here */
struct BadLengthException : public exception {
    int n;
    BadLengthException(int error_en) {
        n = error_en;
    }
    const char* what() const noexcept override {
        static string s;
        s = to_string(n);
        return s.c_str();
    }
};




// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna