#include <iostream>
using namespace std;
class stu_details; 
{
    string name;
    int age;
    int roll_no;
    public:
    stu_details (string n, int n ,  int r)
    {
        name=n; 
        age=a;
        roll_no=r;    
        } // n age=abortroll_no=r;
     void display()
     {
        cout<<"student name is"<<name;
        cout<<"\n student age is"<<age;
        cout<<"\n student roll_no is"<<roll_no;
     }   
    }
    int main()
    {
        string n;
        int a,r ;
        cout<<"Please enter name";
        cin>>n;
        cout<<"Please enter age";
        cin>>a;
        cout<<"Please enter roll no";
        cin>>r;
        stu_details s1(n,a,r);
        s1 display();
        return 0;
    }