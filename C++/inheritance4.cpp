#include<iostream>
using namespace std;
class account{
    protected:
    int accountno;
    float balance;
    public:
    account(int a,float b)
    {
     accountno=a;
     balance=b;
    }
};
class savingaccount :public account{
    float rate;
    public:
    savingaccount(int a,float b,float r):account(a,b)
    {
        rate=r;
    }
    void interestcalculate(){
        balance=balance+(balance*(rate/100));
        cout<<"updated balance :"<<balance<<endl;
    }
};
int main()
{
    int accountno;
    float balance,rate;
    cout<<"Enter account number   balance    interest rate :";
    cin>>accountno>>balance>>rate;
    savingaccount s(accountno,balance,rate);
    s.interestcalculate();
    return 0;
}