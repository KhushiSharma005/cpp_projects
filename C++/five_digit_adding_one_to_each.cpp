#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,d,e,s;
    cout<<"\nEnter five digit number :";
    cin>>n;
    a=(n/10000)+1;
    cout<<"\nfirst digit is :"<<a;
    b=((n%10000)/1000)+1;
    cout<<"\nsecond digit is :"<<b;
    c=(((n%10000)%1000)/100)+1;
    cout<<"\nthird digit is :"<<c;
    d=((((n%10000)%1000)%100)/10)+1;
    cout<<"\nfourth digit is :"<<d;
    e=((((n%10000)%1000)%100)%10)+1;
    cout<<"\nfifth digit is :"<<e;
    s=(a*10000)+(b*1000)+(c*100)+(d*10)+e;
    cout<<"\nnew number adding one to each is :"<<s;
    return 0;
}