#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter your desired number to get the sum:\n";
    cin>>n;
    int sum=0;
    int i=1; //loop variable
    while (i<=n) {
        sum+=i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}