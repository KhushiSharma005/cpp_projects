#include <iostream>
using namespace std;
class bankaccount
{
private:
int accountnumber;
string holdername;
float balance;
public:
void input()
{
    cout<<"\nEnter Account Number : ";
    cin>>accountnumber;
    cout<<"\nEnter Account Holder Name : ";
    cin>>holdername;
    cout<<"\nEnter Initial Balance : ";
    cin>>balance;
}
void deposit(float amount)
{
    balance = balance+amount;
    cout<<"\nAmount Deposited : "<<amount<<endl;
}
void withdraw(float amount)
{
    if (amount<=balance)
    {
        balance = balance-amount;
        cout<<"\nWithdrawn : "<<amount<<endl;
    }
    else
    {
        cout<<"Insufficient Balance ! \n";
    }
}
void display()
{
    cout<<"\nAccount details \n";
    cout<<"\nAccount Number : "<<accountnumber;
    cout<<"\nHolder Name : "<<holdername;
    cout<<"\n Current Balance : "<<balance<<"\n";
}
};
int main()
{
bankaccount b;
b.input();
int c;
float a;
cout<<"\n (1) for Deposit , (2) for Withdraw : ";
cin>>c;
cout<<"\nEnter Amount : ";
cin>>a;
if (c==1)
{
    b.deposit(a);
}
else if (c==2)
{
    b.withdraw(a);
}
else
{
    cout<<"\nInvalid Choice \n";
}
b.display();
return 0;
}
