#include<iostream>
using namespace std;
class Bank
{
protected:
string bankname;
public:
Bank(string n)
{
bankname=n;
}
};
class loan:public Bank
{
    float amount;
    int tenure;
    public:
    loan(string n,float a,int t): Bank(n)
    {
        amount=a;
        tenure=t;
    }
    void EMI()
   {
    cout<<"EMI:"<<amount/tenure;
   }
};
int main()
{
    string Bank;
    float amount;
    int year;
    cout<<"Enter Bank , Amount , Tenure :";
    cin>>Bank>>amount>>year;
    loan l(Bank,amount,year);
    l.EMI();
}