#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    int a, b, temp;
    
    cout << "Enter the value of a: ";
    cin >> a;
    
    cout << "Enter the value of b: ";
    cin >> b;
    
    cout << "Values before swapping: " << a << " " << b << endl;
    
    temp = a;
    a = b;
    b = temp;
    
    cout << "Values after swapping: " << a << " " << b << endl;

    return 0;
}
