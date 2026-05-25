#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout<<"\nEnter the dividend :";
    cin>>a;
    cout<<"\nEnter the divisor :";
    cin>>b;
    c=a/b;
    d=c*b;
    e=a-d;
    cout<<"\nRemainder is :"<<e;
    return 0;
}