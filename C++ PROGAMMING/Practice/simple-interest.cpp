#include<iostream>
#include<conio.h>
using namespace std;
int main() {
    int P , R , T;
    int SI;
    cout<<"Enter the principal";
    cin>>P;
    cout<<"Enter the Return";
    cin>>R;
    cout<<"Enter the Time";
    cin>>T;
    SI=P*R*T/100;
    cout<<SI<<endl;
    return 0;
}