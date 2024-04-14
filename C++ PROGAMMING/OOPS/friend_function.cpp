/*Non member function which can access private member of the class
classA{
------
------
friend ();
};
Here, friend A will be able to access private member of class A---------We use it when we don't want to maek  parent & child class*/

#include <iostream>
using namespace std;

class A {
    int x;
public:
    A(int y) {
        x = y;
    }
    friend void print(A &obj);
};

void print(A &obj) {
    cout << obj.x << endl;
}

int main() {
    A obj(5);
    print(obj);
    return 0;
}

/*This C++ code defines a class `A` with a private member `x` and a constructor that initializes `x` with a value passed as an argument. It also declares a friend function `print` that can access the private member `x` of class `A`. The `print` function simply outputs the value of `x` to the console.

In the `main` function, an object `obj` of class `A` is created with an initial value of `5`. The `print` function is then called with `obj` as an argument, which prints the value of `x` (i.e., `5`) to the console.

Here's the output of the program:

```
5
```

This output indicates that the `print` function successfully accessed and printed the private member `x` of the `A` class object `obj`.*/