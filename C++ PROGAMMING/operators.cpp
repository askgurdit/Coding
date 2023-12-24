#include <iostream>
using namespace std;

int main()
{  
    int num1=10;
    int num2=2;

    cout<< num1+num2 <<endl; //12
    cout<< num1-num2 <<endl; //8
    cout<< num1*num2 <<endl; //20
    cout<< num1/num2 <<endl; //5
    cout<< num1%num2 <<endl; //0

    cout<< (num1==num2) <<endl; //false
    cout<< (num1!=num2) <<endl; //true
    cout<< (num1<num2) <<endl; //false
    cout<< (num1>=num2) <<endl; //true

    num1=10;
    cout<< (num1+=10) <<endl; //10+10=20
    num2=2;
    cout<< (num2-=2) <<endl; //2-2=0


    return 0;

}