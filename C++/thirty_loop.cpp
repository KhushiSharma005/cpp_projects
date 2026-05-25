#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"\nEnter any number :";
    cin>>n;
    if(n==0)
    count=1;
    else
    {
        while (n!=0)
        {
            n=n/10;
            count=count+1;
        }
        
    }
    cout<<"\nNumber of digits :"<<count;
    return 0;
}