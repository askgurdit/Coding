#include<iostream>
using namespace std;
//pass by reference
void changevalue(int &z) {
    z=100;
}
int main() {
    int a=55;
    changevalue(a);
    cout<<a;
    return 0;
}