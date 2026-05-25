#include<iostream>
using namespace std;
int main()
{
    int a,b,m;
    cout<<"\nEnter first no. :";
    cin>>a;
    cout<<"\nEnter second no. :";
    cin>>b;
    m=a>b?a:b;
    cout<<"\nMaximum is :"<<m;
    return 0;
}