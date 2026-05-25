#include <iostream>
using namespace std;
int main()
{
    int i,h,p,s;
    cout<<"\nEnter employee's id :";
    cin>>i;
    cout<<"\nEnter total worked hours of month :";
    cin>>h;
    cout<<"\nEnter salary per hour :";
    cin>>p;
    s=h*p;
    cout<<"\nSalary :"<<s;
    return 0;
}