#include<iostream>
using namespace std;
int main()
{
    int n,j,i;
    cout<<"\nEnter the number up to which ypu want to print cube root :";
    cin>>n;
    i=1;
    while (i<=n)
    {
        j=i*i*i;
    cout<<j<<"\n";
    i=i+1;
}
    return 0;
}