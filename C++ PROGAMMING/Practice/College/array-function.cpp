#include <iostream>
using namespace std;

void array(int a[]) { // Remove semicolon after the function signature
    int i;
    for (i = 0; i < 5; i++) { // Correct the loop syntax
        cout << a[i] << "\t";
    }
}

int main() { 
    int a[5] = {10, 20, 30, 40, 50};
    array(a);
    return 0;
}
