#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cout<<"\nEnter three sides of triangle :";
    cin>>a>>b>>c;
     d=a+b;
     e=b+c;
     f=c+a;
     if (d>c||e>a||f>b)
     cout<<"\nTriangle is valid";
     else
     cout<<"\nInvalid triangle";
     return 0;
     
}