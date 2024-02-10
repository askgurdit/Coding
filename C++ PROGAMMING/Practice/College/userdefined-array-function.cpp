#include <iostream>
using namespace std;

void array(int a[], int size) {
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> a[i];
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int a[size]; // Declare an array of user-specified size

    // Call the function to input elements
    array(a, size);

    // Display the elements of the array
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << "\t";
    }

    return 0;
}
