#include<iostream>
using namespace std;
int main()
{
    int i=2;
    int p=0;
    int n;
    cout<<"\nEnter any number to check weather it is prime or not :";
    cin>>n;
    while (i<n)
    {
        if (n%i==0)
        {
            p=1;
            break;
        }
        i=i+1;
    }
    if (p>0)
    {
     cout<<"Not";
    }
    else
    {
        cout<<"Yes";
    }
    return 0;
}