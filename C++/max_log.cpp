#include <iostream>
using namespace std;
int main()
{
    int a,b,c,m;
    cout<<"\nEnter three numbers :";
    cin>>a>>b>>c;
    if (a>b&&a>c)
    m=a;
    else if (b>c)
    m=b;
    else
    m=c;
    cout<<"\nMaximum is :"<<m;
    return 0;
    
    
}