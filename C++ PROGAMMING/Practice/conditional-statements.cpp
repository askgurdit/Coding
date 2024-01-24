#include<iostream>
using namespace std;
/*int main() {
    // if the input given by the user is odd or even using if-else statement
    int number;
    cout<<"Enter your desired number:"<<endl;
    cin>>number;
    if (number%2==0) {
        cout<<"Entered number is even."<<endl;
    }
        else {
            cout<<"Entered number is odd."<<endl;    
    }
    return 0;
}*/

int main() {
    // if the user is egligible for marraige or not in India 
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if (age>=21) {
        cout<<"Congrats, you are eligible for marraige in India.";
    }
    else if (age>=18) {
        cout<<"You are a adult but eligible for marraige in India";
    }
    else {
        cout<<"Beta abhi aap 12th pass karlo";
    }
    return 0;
}


