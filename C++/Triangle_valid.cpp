#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\nEnter three sides of triangle :";
    cin>>a>>b>>c;
    if (a+b+c==180)
    {
       cout<<"\nValid ";

    }
    else
    {
       cout<<"\nNot valid"; 
    }
    return 0;
}