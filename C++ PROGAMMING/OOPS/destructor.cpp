/*Function that is called when function is deleted ---cannot pass any parameters --- Name ---> ~(class.name)*/
#include <iostream>
using namespace std;

class Rectangle {
public:
    int l;
    int b;

    // Default constructor
    Rectangle() {
        l = 0;
        b = 0;
    }

    // Parameterized constructor
    Rectangle(int x, int y) {
        l = x;
        b = y;
    }

    // Copy constructor
    Rectangle(const Rectangle& r) {
        l = r.l;
        b = r.b;
    }

    // Destructor
    ~Rectangle() {
        cout << "Destructor is called" << endl;
    }
};

int main() {
    Rectangle *r1 = new Rectangle();
    cout << r1->l << " " << r1->b << endl;
    delete r1;

    Rectangle r2(3, 4);

    Rectangle r3 = r2;
    cout << r3.l << " " << r3.b << endl;

    return 0;
}
/*This C++ code defines a class `Rectangle` that represents a rectangle. The class has four member functions:

1. **Default Constructor (`Rectangle()`):**
   - Initializes `l` and `b` (length and breadth) to 0.

2. **Parameterized Constructor (`Rectangle(int x, int y)`):**
   - Initializes `l` and `b` with the values passed as parameters.

3. **Copy Constructor (`Rectangle(const Rectangle& r)`):**
   - Initializes a new `Rectangle` object by copying the values of another `Rectangle` object `r`.

4. **Destructor (`~Rectangle()`):**
   - Outputs a message when an object of `Rectangle` is destroyed.

In the `main` function:

- A `Rectangle` object `r2` is created using the default constructor, and its `l` and `b` values are outputted.
- The `delete` keyword is used to free the memory allocated for the `r1` object, which was created using the `new` keyword.
- Another `Rectangle` object `r2` is created using the parameterized constructor.

When the program ends, the destructor for each object is automatically called, displaying the message "Destructor is called". This demonstrates the use of constructors and destructors in managing object initialization and cleanup in C++.*/