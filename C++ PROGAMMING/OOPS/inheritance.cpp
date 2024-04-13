/* A class that inherits the property of another class
class A (parent class /  super class) -------->  class B (child class / sub class)
INheritance we use for code reusability */

// REFER TO ACCESS SPECIFIERS BEFORE

// SINGLE INHERITANCE
// class A (parent class) ---------> class B (child  class)

#include <iostream>
using namespace std;

// Parent class
class Parent {
public:
    Parent() {
        cout << "Parent class" << endl;
    }
};

// Child class inheriting from Parent
class Child : public Parent {
public:
    Child() {
        cout << "Child class" << endl;
    }
};

int main() {
    Child c; // Creating an object of Child class
    return 0;
}

/*Explanation:

    Class Definition:
        Parent class: Defines a simple parent class with a default constructor that prints "Parent class".
        Child class: Inherits from Parent using public access specifier, which means Child has access to the public members of Parent.
            It defines a default constructor that prints "Child class".

    Main Function:
        Creates an object c of the Child class.
        When c is created, the constructors of both Parent and Child classes are called due to inheritance.
        The output of the program is:

        ruby

        Parent class
        Child class

This example demonstrates the concept of single inheritance, where the Child class inherits properties (in this case, the default constructor) from the Parent class.*/


//------------------REFER TO MULTI-LEVEL INHERITANCE-------------// 