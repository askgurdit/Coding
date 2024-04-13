//------------HEIRARCHICAL INHERITANCE----------//


/*
                   ----------- class B
class A------------
                   ----------- class C */
#include <iostream>
using namespace std;

// Base class A
class A {
public:
    A() {
        cout << "Class A" << endl;
    }
};

// Base class B
class B {
public:
    B() {
        cout << "Class B" << endl;
    }
};

// Base class C
class C {
public:
    C() {
        cout << "Class C" << endl;
    }
};

// Derived class from A and C
class Child1 : public A, public C {
public:
    Child1() {
        cout << "Child1 class" << endl;
    }
};

// Derived class from A and B
class Child2 : public A, public B {
public:
    Child2() {
        cout << "Child2 class" << endl;
    }
};

int main() {
    Child1 c1; // Creating an object of Child1 class
    Child2 c2; // Creating an object of Child2 class
    return 0;
}

/*Explanation:

    Classes A, B, and C are base classes.
    Class Child1 is derived from classes A and C, inheriting properties from both.
    Class Child2 is derived from classes A and B.
    In main(), objects of Child1 and Child2 are created, triggering the constructors of their base classes followed by their own constructors.
    The output of the program will be:

    vbnet

    Class A
    Class C
    Child1 class
    Class A
    Class B
    Child2 class

This code demonstrates multiple inheritance in C++, where a class inherits properties from multiple base classes.
*/

/*---------HYBRID INHERITANCE----------

//Combination of more than one inheritance types
                   ------------- class B
class A------------
                   ------------- class C -------- class D */
#include <iostream>
using namespace std;

// Base class
class A {
public:
    A() {
        cout << "Class A" << endl;
    }
};

// First intermediate class inheriting from A
class B : public A {
public:
    B() {
        cout << "Class B" << endl;
    }
};

// Second intermediate class inheriting from A
class C : public A {
public:
    C() {
        cout << "Class C" << endl;
    }
};

// Derived class inheriting from B and C
class D : public B, public C {
public:
    D() {
        cout << "Class D" << endl;
    }
};

int main() {
    D d; // Creating an object of class D
    return 0;
}

/*Explanation:

    Classes A, B, and C are base classes.
    Classes B and C are intermediate classes that inherit from A.
    Class D is derived from both B and C, making it a derived class that inherits from multiple base classes.
    When an object of class D is created, the constructors of all the base classes (A, B, and C) are called in the order of inheritance hierarchy (A -> B -> C), followed by the constructor of class D.
    The output of the program will be:

    vbnet

    Class A
    Class B
    Class A
    Class C
    Class D

This demonstrates hybrid inheritance, where multiple types of inheritance are combined to form a complex inheritance hierarchy.
*/