/*
Class A-------------
                    Class C (inheriting from both classes)
Class B-------------*/

#include <iostream>
using namespace std;

// Base class 1
class Parent1 {
public:
    Parent1() {
        cout << "Parent1 class" << endl;
    }
};

// Base class 2
class Parent2 {
public:
    Parent2() {
        cout << "Parent2 class" << endl;
    }
};

// Derived class inheriting from both Parent1 and Parent2
class Child : public Parent1, public Parent2 {
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

    Parent1 and Parent2 are two base classes.
    Child is a derived class that inherits from both Parent1 and Parent2.
    In main(), an object c of the Child class is created, which triggers the constructors of both Parent1 and Parent2 classes followed by the constructor of Child class.
    The output of the program will be:

    ruby

    Parent1 class
    Parent2 class
    Child class

This code demonstrates multiple inheritance in C++, where a class inherits from more than one base class.*/

//-----------REFER TO HIERARCHICAL & HYBRID INHERITANCE-----------//