#include <iostream>

using namespace std;

int main() {
    int marks[6];
    int totalMarks = 0;

    // Input marks for 6 subjects
    std::cout << "Enter marks for 6 subjects:\n";
    for (int i = 0; i < 6; ++i) {
        cout << "Subject " << i + 1 << " marks: ";
        cin >> marks[i];
        totalMarks += marks[i];
    }

    // Displaying total marks
    cout << "Total marks: " << totalMarks << endl;

    return 0;
}
