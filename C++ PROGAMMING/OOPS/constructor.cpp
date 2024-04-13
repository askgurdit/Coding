#include <iostream>
using namespace std;

class Rectangle {
public:
    int l;
    int b;

    // Default constructor
    Rectangle() {
        l = 0;
        b = 0;
    }

    // Parameterized constructor
    Rectangle(int x, int y) {
        l = x;
        b = y;
    }

    // Copy constructor
    Rectangle(const Rectangle& r) {
        l = r.l;
        b = r.b;
    }
};

int main() {
    Rectangle r1;
    cout << r1.l << " " << r1.b << endl;

    Rectangle r2(3, 4);
    cout << r2.l << " " << r2.b << endl;

    Rectangle r3 = r2;
    cout << r3.l << " " << r3.b << endl;

    return 0;
}
