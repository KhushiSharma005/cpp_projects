#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,d,e,s;
    cout<<"\nEnter the five digit number :";
    cin>>n;
    cout<<"\nNumber is :"<<n;
    a=n/10000;
    cout<<"\nFirst digit is :"<<a;
    b=(n%10000)/1000;
    cout<<"\nSecond digit is :"<<b;
    c=((n%10000)%1000)/100;
    cout<<"\nThird digit is :"<<c;
    d=(((n%10000)%1000)%100)/10;
    cout<<"\nFourth digit is :"<<d;
    e=(((n%10000)%1000)%100)%10;
    cout<<"\nFifth digit is:"<<e;
    s=a+b+c+d+e;
    cout<<"\nSum of five digit number is :"<<s;
    return 0;
}