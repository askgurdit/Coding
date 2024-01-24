#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your obtained marks: ";
    cin >> marks;

    if (marks >= 0 && marks <= 900) {
        // Adjust cases for a scale out of 9.5
        switch (marks / 95) {
            case 10:
                cout << "Congrats, you have scored 9.5 CGPA!\n";
                break;
            case 9:
                cout << "You have scored 9 CGPA!\n";
                break;
            case 8:
                cout << "You have scored 8 CGPA!\n";
                break;
            case 7:
                cout << "You have scored 7 CGPA!\n";
                break;
            case 6:
                cout << "You have scored 6 CGPA!\n";
                break;
            case 5:
                cout << "You have scored 5 CGPA!\n";
                break;
            case 4:
                cout << "You have scored 4 CGPA!\n";
                break;
            case 3:
                cout << "You have scored 3 CGPA!\n";
                break;
            case 2:
                cout << "You have scored 2 CGPA!\n";
                break;
            case 1:
                cout << "You have scored 1 CGPA!\n";
                break;
            default:
                cout << "You have entered wrong input\n";
                break;
        }
    } else {
        cout << "You have entered marks out of the valid range.\n";
    }

    return 0;
}
