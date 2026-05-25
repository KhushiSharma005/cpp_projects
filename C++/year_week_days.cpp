#include <iostream>
using namespace std;
int main()
{
    int n,y,m,d;
    cout<<"\nEnter number of days : ";
    cin>>n;
    y=n/365;
    cout<<"\nYear :"<<y;
    m=(n%365)/52;
    cout<<"\nMonth :"<<m;
    d=(n%365)%52;
    cout<<"\nDays :"<<d;
    return 0;
}