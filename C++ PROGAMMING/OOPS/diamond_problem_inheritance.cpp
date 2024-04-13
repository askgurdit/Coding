/* DIAMOND PROBLEM OF INHERITANCE
                  ----------- class B ------------- class D
Class A-----------                                          ----------- class F
                 ------------ class C ------------- class E 
(here properties are coming from both sides in class F)*/

#include <iostream>
using namespace std;

// Base class A
class A {
public:
    A() {
        cout << "Class A" << endl;
    }
};

// Intermediate class B inheriting from A
class B : public A {
public:
    B() {
        cout << "Class B" << endl;
    }
};

// Intermediate class C inheriting from A
class C : public A {
public:
    C() {
        cout << "Class C" << endl;
    }
};

// Derived class D inheriting from B and C
class D : public B, public C {
public:
    D() {
        cout << "Class D" << endl;
    }
};

// Derived class E inheriting from C
class E : public C {
public:
    E() {
        cout << "Class E" << endl;
    }
};

// Derived class F inheriting from D and E
class F : public D, public E {
public:
    F() {
        cout << "Class F" << endl;
    }
};

int main() {
    F f; // Creating an object of class F
    return 0;
}

/*Explanation:

    Classes A, B, C, D, E, and F represent the hierarchy of classes where F inherits from D and E, D inherits from B and C, and B and C both inherit from A.
    The diamond problem arises because A is inherited twice in the hierarchy (once through B and once through C), and when D and E inherit from B and C respectively, they each get their own separate copy of A.
    When an object of class F is created, the constructors of A, B, C, D, E, and F are called in the order of inheritance hierarchy, leading to the output:

    vbnet

Class A
Class B
Class A
Class C
Class D
Class A
Class C
Class E
Class F

This demonstrates the diamond problem of inheritance and how it is handled in C++ using virtual inheritance.

Let's break down the output step by step to understand why each class constructor is called:

1. `Class A`: The constructor of `A` is called when `B` and `C` are constructed because both `B` and `C` inherit from `A`.

2. `Class B`: The constructor of `B` is called when `D` is constructed because `D` inherits from `B`.

3. `Class A` (second occurrence): Another instance of the constructor of `A` is called because `C` also inherits from `A`.

4. `Class C`: The constructor of `C` is called when `D` is constructed because `D` inherits from `C`.

5. `Class D`: The constructor of `D` is called when `F` is constructed because `F` inherits from `D`.

6. `Class A` (third occurrence): Again, the constructor of `A` is called because `E` also inherits from `A`.

7. `Class C` (second occurrence): The constructor of `C` is called when `E` is constructed because `E` inherits from `C`.

8. `Class E`: The constructor of `E` is called when `F` is constructed because `F` inherits from `E`.

9. `Class F`: Finally, the constructor of `F` is called.

This sequence of constructor calls is a result of the diamond problem of inheritance, where classes `B` and `C` both inherit from `A`, and classes `D` and `E` inherit from `B` and `C` respectively, leading to multiple instances of `A` and `C` being created in the inheritance hierarchy.*/
