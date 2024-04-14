/*Ability of objects/methods to take different forms
Two types---1)Run time and 2)Compile time */

// Compile time polymorphism----two types-----Function overloading and operator overloading-----

/* FUNCTION OVERLOADING
Define a number of  functions with same function name they perform differently according to the  arguments passed
Arguments---how many and types 
We can define 1 function which can act differently according to the parameters*/

#include <iostream>
using namespace std;

class Sum {
public:
    void add(int x, int y) {
        int sum = x + y;
        cout << sum << endl;
    }
    void add(int x, int y, int z) {
        int sum = x + y + z;
        cout << sum << endl;
    }
    void add(float x, float y) {
        float sum = x + y;
        cout << sum << endl;
    }
};

int main() {
    Sum s;
    s.add(2, 3);
    s.add(2, 3, 4);
    s.add(float(2.3), float(2.7));

    return 0;
}