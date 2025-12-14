// Include input/output stream library
#include <iostream>
// Using standard namespace
using namespace std;

// Define a class named Counter
class Counter {
    // Private member variable
    int a;

public:
    // Default constructor
    Counter() {
        a = 0;
    }

    // Parameterized constructor
    Counter(int a) {
        this->a = a;  // Initialize member variable with parameter
    }

    // Member function to display value
    void display() {
        cout << "value of a : " << a;
    }

    // Declare friend function for post-decrement operator
    friend Counter operator--(Counter obj, int);
};

// Definition of post-decrement operator overloading function
Counter operator--(Counter obj, int) {
    return obj.a--;  // Return current value and then decrement
}

// Main function
int main() {
    // Create Counter object with value 5
    Counter obj(5);
    // Apply post-decrement operator
    obj = obj--;
    // Display the result
    obj.display();
    
    return 0;  // Return from main
}