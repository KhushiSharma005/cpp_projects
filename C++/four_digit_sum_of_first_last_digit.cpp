#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,d,s;
    cout<<"\nEnter four digit no. :";
    cin>>n;
    a=n/1000;
    cout<<"\nfirst digit is :"<<a;
    b=n%1000/100;
    cout<<"\nsecond digit is :"<<b;
    c=n%1000%100/10;
    cout<<"\nthird digit is :"<<c;
    d=n%1000%100%10;
    cout<<"\nfourth digit is :"<<d;
    s=a+d;
    cout<<"\nsum of first and last digit is :"<<s;
    return 0;
}