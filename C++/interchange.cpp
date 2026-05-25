#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\nEnter the first number :";
    cin>>a;
    cout<<"\nEnter the second number :";
    cin>>b;
    cout<<"\nA ="<<a;
    cout<<"\nB ="<<b;
    a=a+b;
    b=a-b;
    cout<<"\nA ="<<b;
    a=a-b;
    cout<<"\nB ="<<a;
    return 0;
}