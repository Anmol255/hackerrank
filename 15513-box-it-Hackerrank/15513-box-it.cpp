
#include <iostream>

class Box {
private:
    // Private integer dimensions
    int l;
    int b;
    int h;

public:
    // 1. Default Constructor
    Box() : l(0), b(0), h(0) {}

    // 2. Parameterized Constructor
    Box(int length, int breadth, int height) : l(length), b(breadth), h(height) {}

    // 3. Copy Constructor (Passed by reference to avoid infinite recursion)
    Box(const Box& B) : l(B.l), b(B.b), h(B.h) {}

    // Getter functions
    int getLength() const {
        return l;
    }

    int getBreadth() const {
        return b;
    }

    int getHeight() const {
        return h;
    }

    // Function to calculate volume
    // Returns long long to prevent integer overflow during multiplication
    long long CalculateVolume() const {
        return (long long)l * b * h;
    }

    // Overloading '<' operator to compare box volumes/dimensions
    bool operator<(const Box& B) const {
        if (this->l < B.l) {
            return true;
        }
        if (this->b < B.b && this->l == B.l) {
            return true;
        }
        if (this->h < B.h && this->b == B.b && this->l == B.l) {
            return true;
        }
        return false;
    }

    // Overloading '<<' operator for easy object printing
    friend std::ostream& operator<<(std::ostream& out, const Box& B) {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna