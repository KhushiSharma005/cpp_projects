#include <iostream>
using namespace std;
int main()
{
    int i,u;
    float b,t,s;
    char n[30];
    cout<<"\nEnter Customer I'd :";
    cin>>i;
    cout<<"\nEnter Name :";
    cin>>n;
    cout<<"\nEnter Unit used :";
    cin>>u;
    cout<<"\nCustomer I'd :"<<i;
    cout<<"\nCustomer Name :"<<n;
    cout<<"\nUnit Consumed :"<<u;
    if (u<199)
    {
    b=u*1.20;
    cout<<"\nAmount Charges @Rs.1.20 per unit :"<<b;
    }
    else if (u<400)
    {
    b=u*1.50;
    cout<<"\nAmount Charges @Rs.1.50 per unit :"<<b;
    }
    else if (u<600)
    {
    b=u*1.80;
    cout<<"\nAmount Charges @Rs.1.80 per unit :"<<b;
    }
    else if (u>=600)
    {
    b=u*2.00;
    cout<<"\nAmount Charges @Rs.2.00 per unit :"<<b;
    }
    else 
    {
        cout<<"\nInvalid";
    }
    if (b>400)
    {
     s=b*(15/100.00);
     cout<<"\nSubcharge Amount :"<<s;
    }
    else
{
    cout<<"\nSubcharge : 0";
}
    t=b+s;
    cout<<"\nNet Amount Paid by the Customer :"<<t;
    return 0;
    
}