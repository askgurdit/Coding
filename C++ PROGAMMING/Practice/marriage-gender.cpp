#include<iostream>
using namespace std;

int main() {
    // if the user is eligible for marriage or not in India based on their gender
    int gender;
    int age;

    cout << "Enter your gender: 0 for Boy or 1 for Girl" << endl;
    cin >> gender;

    if (gender == 0) {
        cout << "Enter your age:" << endl;
        cin >> age;

        if (age >= 24) {
            cout << "Congrats, you are eligible for marriage in India.";
        } else {
            cout << "You are an adult but not eligible for marriage in India";
        }
    } else if (gender == 1) {
        cout << "Enter your age:" << endl;
        cin >> age;

        if (age >= 21) {
            cout << "Congrats, you are eligible for marriage in India.";
        } else {
            cout << "You are an adult but not eligible for marriage in India";
        }
    } else {
        cout << "Invalid input for gender. Please enter 0 for Boy or 1 for Girl." << endl;
    }

    return 0;
}
