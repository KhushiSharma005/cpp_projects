#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,digit;
    cout<<"\nEnter any number :";
    cin>>n;
    while (n!=0)
    {
     digit=n%10;
     rev=rev*10+digit;
     n/=10;
    }
    cout<<"\nReversed number :"<<rev;
    return 0;
}