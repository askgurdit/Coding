#include <iostream>
using namespace std;
void avg(int a=200, int b=250, int c=250)
{
    float d;
    d=(a+b+c)/3.0;
    cout<<"\nThe average is\n"<<d;
}
int main()
{
    int a=100;
    int b=50;
    int c=150;
    cin>>c;
    avg(a,b,c);
    avg();    
}