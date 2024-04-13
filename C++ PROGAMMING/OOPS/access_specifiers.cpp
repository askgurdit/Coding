/*Three types of access specifiers :
Public
Private
Protected*/

//PUBLIC --Data & functions can be accessec from anywhere in the code.

/*PROTECTED
class ABC {
    proteected:
    int n;
}
-->Accessible in own class, parent class & derived class */

//PRIVATE 
// -->Accessible only in own class

#include <iostream>
using namespace std;

class Parent {
public:
    int x; // Public member

private:
    int y; // Private member

protected:
    int z; // Protected member
};

class Child1 : public Parent {
    // x will remain public
    // y will remain inaccessible
    // z will be protected
};

class Child2 : private Parent {
    // x will become private
    // y will become private
    // z will be inaccessible
};

class Child3 : protected Parent {
    // x will become protected
    // y will become protected
    // z will be inaccessible
};

int main() {
    Parent p;
    p.x; // Accessible
    // p.y; // Not accessible
    // p.z; // Not accessible
    return 0;
}

/*Sure! Let's break down the code and explain it step by step:

1. **Access Specifiers:**
   - In C++, there are three access specifiers: `public`, `private`, and `protected`.
   - These specifiers determine the visibility and accessibility of class members (variables and functions) in different parts of the program.

2. **`Parent` Class:**
   - This class has three member variables: `x`, `y`, and `z`.
   - `x` is declared as `public`, so it can be accessed from anywhere in the code.
   - `y` and `z` are declared as `private`, so they can only be accessed within the `Parent` class itself.

3. **`Child1`, `Child2`, and `Child3` Classes:**
   - These classes inherit from the `Parent` class using different access specifiers.

   - **`Child1` (public inheritance):**
     - Inherits `x` as `public` and `z` as `protected`.
     - `y` remains inaccessible from outside the `Parent` class and its derived classes.

   - **`Child2` (private inheritance):**
     - Inherits all members (`x`, `y`, and `z`) as `private`.
     - All members of `Parent` become `private` members of `Child2`, so they cannot be accessed from outside `Child2`.

   - **`Child3` (protected inheritance):**
     - Inherits `x` and `y` as `protected`, and `z` as `protected`.
     - `z` remains inaccessible from outside the `Parent` class and its derived classes.

4. **`main()` Function:**
   - Creates an object `p` of type `Parent`.
   - `p.x` is accessible because `x` is `public`.
   - `p.y` and `p.z` are not accessible from outside the `Parent` class.

Overall, this code demonstrates the use of access specifiers in C++ to control the visibility and accessibility of class members in different contexts.*/
