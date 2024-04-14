/*Ability of objects/methods to take different forms
Two types---1)Run time and 2)Compile time */

// Compile time polymorphism----two types-----Function overloading and operator overloading-----

/* FUNCTION OVERLOADING
Define a number of  functions with same function name they perform differently according to the  arguments passed
Arguments---how many and types 
We can define 1 function which can act differently according to the parameters

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
} */

/* OPERATOR OVERLOADING
"+" 2+3=5 not 23 and "cat" + "woman" = "catwoman" */

#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int img;

    Complex(int x = 0, int y = 0) {
        real = x;
        img = y;
    }

    Complex operator+(Complex &c2) {
        Complex ans;
        ans.real = real + c2.real;
        ans.img = img + c2.img;
        return ans;
    }
};

int main() {
    Complex c1(1, 2);
    Complex c2(1, 3);
    Complex c3 = c1 + c2;
    cout << c3.real << " + " << c3.img << "i" << endl;
    return 0;
}

/*Sure, let's go through the code step by step:

1. **Header and Namespace**: 
   ```cpp
   #include <iostream>
   using namespace std;
   ```
   This includes the necessary header file for input/output (`iostream`) and uses the `std` namespace for the standard library.

2. **Complex Class**:
   ```cpp
   class Complex {
   public:
       int real;
       int img;

       Complex(int x = 0, int y = 0) {
           real = x;
           img = y;
       }

       Complex operator+(Complex &c2) {
           Complex ans;
           ans.real = real + c2.real;
           ans.img = img + c2.img;
           return ans;
       }
   };
   ```
   - The `Complex` class represents complex numbers with real and imaginary parts.
   - It has two public member variables `real` and `img` to store the real and imaginary parts, respectively.
   - The class has a constructor `Complex(int x = 0, int y = 0)` which initializes the real and imaginary parts of a complex number. It has default parameter values of 0.
   - The `operator+` method overloads the `+` operator for the `Complex` class. It takes another `Complex` object (`c2`) as a reference and returns a new `Complex` object that represents the sum of the two complex numbers (`*this` and `c2`).

3. **Main Function**:
   ```cpp
   int main() {
       Complex c1(1, 2);
       Complex c2(1, 3);
       Complex c3 = c1 + c2;
       cout << c3.real << " + " << c3.img << "i" << endl;
       return 0;
   }
   ```
   - Inside the `main` function, two `Complex` objects `c1` and `c2` are created with initial values.
   - The `+` operator is used between `c1` and `c2`, which is actually a call to the `operator+` method defined in the `Complex` class.
   - The result of `c1 + c2` is stored in a new `Complex` object `c3`.
   - Finally, the real and imaginary parts of `c3` are printed to the console.
   
   Let's go through the addition step by step:

1. **Initialization**:
   - `Complex c1(1, 2);`: This initializes `c1` with real part `1` and imaginary part `2`.
   - `Complex c2(1, 3);`: This initializes `c2` with real part `1` and imaginary part `3`.

2. **Addition**:
   - `Complex c3 = c1 + c2;`: This line adds `c1` and `c2` using the `operator+` method defined in the `Complex` class.
   - Inside the `operator+` method, `c1.real + c2.real` adds the real parts (`1 + 1 = 2`), and `c1.img + c2.img` adds the imaginary parts (`2 + 3 = 5`).
   - So, the result is a new `Complex` object `c3` with real part `2` and imaginary part `5`.

3. **Output**:
   - `cout << c3.real << " + " << c3.img << "i" << endl;`: This line prints the real part (`2`), a plus sign (`+`), the imaginary part (`5`), and the imaginary unit (`i`) to the console, resulting in `2 + 5i`.*/
