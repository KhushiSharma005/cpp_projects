#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter no. of days in year :";
    cin>>n;
    if (n%4==0)
    {
       cout<<"\nLeap year ";
    }
    else
{
    cout<<"\nNot leap year ";
}
    return 0;
}