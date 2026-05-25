#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"\nEnter first no. :";
    cin>>a;
    cout<<"\nEnter second no. :";
    cin>>b;
    cout<<"\nEnter third no. :";
    cin>>c;
    cout<<"\nA :"<<a;
    cout<<"\nB :"<<b;
    cout<<"\nC :"<<c;
    d=a;
    a=b;
    cout<<"\nA :"<<a;
    b=c;
    cout<<"\nB :"<<b;
    c=d;
    cout<<"\nC :"<<c;
    return 0;
}