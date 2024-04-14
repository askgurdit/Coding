/*Resolved at runtime
using function overloading child class defines a function of parent class*/
#include <iostream>
using namespace std;

class Parent {
public:
    virtual void print() {
        cout << "parent class" << endl;
    }
    void show() {
        cout << "parent class" << endl;
    }
};

class Child : public Parent {
public:
    void print() {
        cout << "child class" << endl;
    }
    void show() {
        cout << "child class" << endl;
    }
};

int main() {
    Parent* p;
    Child c;
    p = &c;
    p->print();
    p->show();

    return 0;
}

/*This code demonstrates function overloading in a child class that inherits from a parent class. Here's a breakdown of the code with its output:

1. **Parent Class (`Parent`):**
   - It has two functions, `print()` and `show()`.
   - `print()` is a virtual function, indicating that it can be overridden by a function with the same signature in a derived class.
   - `show()` is a normal function.

2. **Child Class (`Child`):**
   - It inherits from the `Parent` class.
   - It overrides both `print()` and `show()` functions from the parent class.

3. **Main Function:**
   - It declares a pointer `p` of type `Parent`.
   - It creates an object `c` of type `Child`.
   - It assigns the address of `c` to the pointer `p`.
   - It calls the `print()` and `show()` functions using the pointer `p`.

**Output:**
- Since `print()` is a virtual function, the overridden version in the `Child` class is called, which prints "child class".
- `show()` is not a virtual function, so the version in the `Parent` class is called, which prints "parent class".

Therefore, the output of the code will be:
```
child class
parent class
```*/
/* -------------Difference of Compile time and run time*/