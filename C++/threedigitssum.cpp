#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,s;
    cout<<"\nEnter three digit integer number :";
    cin>>a;
    b=a/100;
    cout<<"\nFirst digit is :"<<b;
    c=a%100/10;
    cout<<"\nSecond digit is :"<<c;
    d=(a%100)%10;
    cout<<"\nThird digit is :"<<d;
    s=b+c+d;
    cout<<"\nSum of three digits is :"<<s;
    return 0;
}