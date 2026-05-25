#include<iostream>
using namespace std;
int main()
{
    char n[30];
    int a,s,e;
    cout<<"\nEnter name of applicant :";
    cin>>n;
    cout<<"\nEnter Age :";
    cin>>a;
    cout<<"\nEnter Salary :";
    cin>>s;
    cout<<"\nExisting Loan (1 for No, 2 for Yes):";
    cin>>e;
    if (a>=21&&s>=30000)
    {
        if (e==2)
        {
        cout<<"\nNot Eligible";
        }
        
    }
    else
    cout<<"\nEligible";
    return 0;
}