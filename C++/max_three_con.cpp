#include<iostream>
using namespace std;
int main()
{
    int a,b,c,m;
    cout<<"\nEnter three numbers :";
    cin>>a>>b>>c;
    m=a>b&&a>c?a:b>c?b:c;
    cout<<"\nMaximum is :"<<m;
    return 0;
}