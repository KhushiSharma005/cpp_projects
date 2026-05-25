#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"\nEnter any number :";
    cin>>n;
    i=0;
    do
    {
    cout<<i;
    i=i+2;
    } while (i<=n);
    return 0;
}