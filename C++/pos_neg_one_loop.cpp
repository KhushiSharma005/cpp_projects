#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"\nEnter the number up to which you want to print 1 -1 :";
    cin>>n;
    i=1;
    while (i<=n)
    {
        if (i%2==0)
        {
            cout<<-1<<" ";
        }
        else
        {
            cout<<" "<<1<<" ";
        }
        i=i+1;
    }
    return 0;
}