/* Parent class is derived  from another class
Class A ---------->  calss B --------> class C*/

#include <iostream>
using namespace std;

// Base class
class A {
public:
    A() {
        cout << "Constructor of class A" << endl;
    }
};

// Derived class from A
class B : public A {
public:
    B() {
        cout << "Constructor of class B" << endl;
    }
};

// Derived class from B
class C : public B {
public:
    C() {
        cout << "Constructor of class C" << endl;
    }
};

int main() {
    C c; // Creating an object of class C
    return 0;
}


/*Explanation:

    Class A is the base class.
    Class B is derived from class A, making it a child class of A.
    Class C is derived from class B, making it a child class of B and a grandchild class of A.
    When an object of class C is created, the constructors of all three classes (A, B, and C) are called in the order of inheritance hierarchy (A -> B -> C).

Output:

kotlin

Constructor of class A
Constructor of class B
Constructor of class C

This demonstrates the multilevel inheritance where a class inherits from another class, which in turn may be inherited by another class, forming a hierarchy.*/

//------------REFER TO MULTIPLE INHERITANCE----------//