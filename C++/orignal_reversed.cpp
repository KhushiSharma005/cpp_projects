#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,d,e,f;
    cout<<"\nEnter the five digit no. :";
    cin>>n;
    a=n/10000;
    b=(n%10000)/1000;
    c=((n%10000)%1000)/100;
    d=(((n%10000)%1000)%100)/10;
    e=((((n%10000)%1000)%100)%10)/1;
    f=(e*10000)+(d*1000)+(c*100)+(b*10)+a;
    cout<<"\nReversed no. is :"<<f;
    if (n==f)
    {
     cout<<"\nBoth no. are equal";   /* code */
    }
    else
    {
     cout<<"\nNot equal";   
    }
    return 0;
}