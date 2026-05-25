#include <iostream>
using namespace std;
int main()
{
    int a,b,m,n;
    cout<<"\nEnter first no. :";
    cin>>a;
    cout<<"\nEnter second no. :";
    cin>>b;
    if (a>b)
    {
        m=a;
        n=b;/* code */
    }
    else
    {
        m=b;
        n=a;
    }
    cout<<"\nMaximum is :"<<m;
    cout<<"\nMinimum is :"<<n;
    return 0;
}