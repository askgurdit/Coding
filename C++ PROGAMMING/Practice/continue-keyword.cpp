#include <iostream>
using namespace std;
int main() {
    //this code prints the value fro 1 to 50 except multiples of 3
    int i=1;
    for (i=1; i<=50; i++) {
        if (i%3==0) {
            continue;
        }cout<<i<<endl;
}
return  0;
}