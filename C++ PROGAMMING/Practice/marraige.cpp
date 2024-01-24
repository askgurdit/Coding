#include<iostream>
using namespace std;
int main() {
    // if the user is egligible for marriage or not in India 
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if (age>=21) {
        cout<<"Congrats, you are eligible for marriage in India.";
    }
    else if (age>=18) {
        cout<<"You are a adult but not eligible for marriage in India";
    }
    else {
        cout<<"Beta abhi aap 12th pass karlo";
    }
    return 0; 
}