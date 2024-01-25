#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of inputs: ";
    cin >> n;

    int sum = 0;
    do {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        sum += num;
        n--;
    } while (n > 0);

    cout << "Sum: " << sum << endl;
    return 0;
}
