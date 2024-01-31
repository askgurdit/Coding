#include<iostream>
using namespace std;
int add (int num1,int num2) {
    int sum=num1+num2;
    return sum;
}//My first ever function in C++
int add (int num1,int num2,int num3) {
    int sum=num1+num2+num3;
    return sum;
}
int add (float num1,float num2) {
    float sum=num1+num2;
    return sum;
}
int main() {
    int a=5;
    int b=8;
    int g=6;
    float e=55.8;
    float f=33.2;
    // cout<<add(a,b)<<endl;
    // int c,d;//sum  using inputs from the user and sum  via  function
    // cin>>c;
    //cin>>d;
    //cout<<add(c,d)<<endl;
    cout<<add(a,b,g)<<endl; //same funnction name but output basis on the inputs in function 
    cout<<add(e,f)<<endl; //float ouput
    return 0;
}