/*Binding of methods & variables together into a single unit --> [class]
HOW? data is only accessible from the class methods 
Also leads to data abstraction/hiding
class --> Abstract data type (ADT) 
*/

#include <iostream>
using namespace std;

class ABC {
    int x; // Private by default
public:
    void set(int n) {
        x = n;
    }
    int get() {
        return x;
    }
};

int main() {
    ABC obj1;
    obj1.set(3);
    cout << obj1.get() << endl;
    return 0;
}
/*This C++ code defines a class `ABC` that demonstrates the concept of encapsulation, which is one of the key principles of object-oriented programming. Encapsulation refers to the bundling of data (variables) and functions (methods) that operate on the data into a single unit (a class), and restricting access to the data from outside the class.

In this code:
- The class `ABC` has a private member variable `x`, which means that `x` can only be accessed directly from within the class itself, not from outside.
- The class also has two public member functions: `set(int n)` and `get()`. 
  - `set(int n)` is used to set the value of `x`.
  - `get()` is used to retrieve the value of `x`.

In the `main` function:
- An object `obj1` of class `ABC` is created.
- The `set(3)` method is called on `obj1` to set the value of `x` to 3.
- The `get()` method is called on `obj1` to retrieve the value of `x`, which is then printed to the console using `cout`.

This code demonstrates how encapsulation allows you to control access to the data (in this case, `x`) by providing public methods to manipulate the data while keeping the data itself private. This helps in achieving data abstraction and hiding the implementation details of the class from the outside world.*/
