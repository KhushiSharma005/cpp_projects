#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"\nEnter a number up to which you want to print square root :";
    cin>>n;
    i=1;
    while (i<=n)
    {
        j=i*i;
        cout<<j<<"\n";
        i=i+1;
    }
    return 0;
}