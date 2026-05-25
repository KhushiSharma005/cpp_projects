#include<iostream>
using namespace std;
int main()
{
    int a,f;
    char n[30];
    cout<<"\nEnter name of student:";
    cin>>n;
    cout<<"\nEnter Attendance %:";
    cin>>a;
    cout<<"\nFee Paid  (1 for Paid, 2 For Not Paid):";
    cin>>f;
    if (a<75&&f==2)
    {
    cout<<"\nStatus = Detained";
    }
    else if (a<75&&f==1)
    {
    cout<<"\nStatus = Warning";
    }
    else if (a>=75&&f==2)
    {
    cout<<"\nStatus = Pending fees";
    }
    else
    {
        cout<<"\nAllowed";
    }
    return 0;
}