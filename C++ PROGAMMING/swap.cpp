#include <iostream>

using namespace std;

int main() {
    // Declare two variables
    int num1, num2;

    // Input values from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Swap the numbers
    int temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the swapped numbers
    cout << "After swapping, the numbers are: " << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}
