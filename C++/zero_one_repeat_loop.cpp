#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"\nEnter number till which you want to print 1 0 :";
    cin>>n;
    i=1;
    j=0;
    do
    {
      j=i%2;
      cout<<j<<" ";
      i=i+1;
    } while (i<=n);
    
    return 0;
}