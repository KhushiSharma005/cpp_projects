#include <iostream>
using namespace std;
int main()
{
    int a,b,c,s;
    cout<<"\nEnter two digit integer no. :";
    cin>>a;
    cout<<"\nA="<<a;
    b=a/10;
    cout<<"\nfirst digit is :"<<b;
    c=a%10;
    cout<<"\nsecond digit is :"<<c;
    s=b+c;
    cout<<"\nsum of digits is :"<<s;
    return 0;


}