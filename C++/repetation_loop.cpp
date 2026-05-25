#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"\nEnter any number till how many time you want to repeat one :";
    cin>>n;
    i=1;
    j=1;
    while (i<=n)
    {
    cout<<j<<" ";
    i=i+1;
    }
    return 0;
}