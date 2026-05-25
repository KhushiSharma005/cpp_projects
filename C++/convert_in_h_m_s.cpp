#include <iostream>
using namespace std;
int main()
{
    int n,h,m,s;
    cout<<"\nEnter the seconds :";
    cin>>n;
    h=n/3600;
    cout<<"\nHours :"<<h;
    m=(n%3600)/60;
    cout<<"\nMinutes :"<<m;
    s=(n%3600)%60;
    cout<<"\nSeconds :"<<s;
    return 0;
}