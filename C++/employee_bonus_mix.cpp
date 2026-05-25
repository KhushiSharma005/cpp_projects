#include<iostream>
using namespace std;
int main()
{
    int i,d,s,y;
    float b;
    char n[30];
    cout<<"\nEnter employee's id :";
    cin>>i;
    cout<<"\nEnter Name :";
    cin>>n;
    cout<<"\nEnter dept (1 for HR, 2 for IT, 3 for sales):";
    cin>>d;
    cout<<"\nEnter years of service :";
    cin>>y;
    cout<<"\nEnter Salary:";
    cin>>s;
    cout<<"\nEmployee id :"<<i;
    cout<<"\nName :";
    cout<<"\nDept :"<<d;
    cout<<"\nYears of Service :"<<s;
    cout<<"\nSalary :"<<s;
    if (s<30000)
    {
     cout<<"\nBonus = 20%";
    }
    else if (d==2&&y>5)
    {
    cout<<"\nBonus = 15%";
    }
    else if (d==3||s>45000)
    {
    cout<<"\nBonus = 12%";
    }
    else
    {
        cout<<"\nBonus = 8%";
    }
    return 0;
    
}