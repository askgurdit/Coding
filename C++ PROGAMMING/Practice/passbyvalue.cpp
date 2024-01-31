#include<iostream>
using namespace std;
//pass by value
int changevalue (int z) {
    z=100;
    return z;
}
int main() {
    int a=5;
    a= changevalue(a);
    cout<<a;
    return 0;
}

// pass by value

