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
};

int main() {
    Rectangle r1;
    cout << r1.l << " " << r1.b << endl;

    Rectangle r2(3, 4);
    cout << r2.l << " " << r2.b << endl;

    Rectangle r3 = r2;
    cout << r3.l << " " << r3.b << endl;

    return 0;
}

/*Certainly! Let's break down the code in more detail:

1. **Class Definition (`Rectangle`):**
   - The class `Rectangle` is defined to represent a rectangle.
   - It has two public member variables `l` (length) and `b` (breadth), both of type `int`.

2. **Constructors:**
   - **Default Constructor (`Rectangle()`):**
     - Initializes `l` and `b` to 0.
   - **Parameterized Constructor (`Rectangle(int x, int y)`):**
     - Takes two `int` parameters `x` and `y` to initialize `l` and `b` respectively.
   - **Copy Constructor (`Rectangle(const Rectangle& r)`):**
     - Takes a `const` reference to another `Rectangle` object `r`.
     - Copies the values of `l` and `b` from `r` to initialize the new object.

3. **Main Function:**
   - **Object Creation:**
     - Creates three `Rectangle` objects: `r1`, `r2`, and `r3`.
   - **Initialization:**
     - `r1` is initialized using the default constructor, so its `l` and `b` are both set to 0.
     - `r2` is initialized using the parameterized constructor with `x=3` and `y=4`, setting its `l` to 3 and `b` to 4.
     - `r3` is initialized using the copy constructor with `r2`, so `r3` gets the same `l` and `b` values as `r2`.
   - **Output:**
     - Prints the `l` and `b` values of each `Rectangle` object using `cout`.

Overall, this code demonstrates the concept of constructors in C++: default, parameterized, and copy constructors, and how they can be used to initialize objects of a class.*/
