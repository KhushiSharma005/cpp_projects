#include <iostream>
using namespace std;
int main()
{
    int n;
    float f;
    cout<<"\nEnter no. of day late :";
    cin>>n;
    if (n<=5)
    {
    f=n*0.50;
    cout<<"\nFine :"<<f;    
    }
    else if (n>5&&n<=10)
    {
     f=n*1.0;
     cout<<"nFine :"<<f;
    }
    else if (n>10&&n<=30)
    {
    f=n*5;
    cout<<"\nFine :"<<f;
    }
    else
    {
        cout<<"\nMembership cancel";
    }
    return 0;
}