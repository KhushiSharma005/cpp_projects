#include <iostream>
using namespace std;

class Account 
{
protected:
    float balance;
public:
    Account(float b)
     {
         balance = b; 
     }
};

class Savings : public Account 
{
public:
    Savings(float b) : Account(b) {}
    void interest() 
    {
        cout << balance * 0.05 << endl;
    }
};

class Current : public Account 
{
public:
    Current(float b) : Account(b) {}
    void overdraft() 
    {
        cout << "Overdraft allowed\n";
    }
};

int main()
{
    Savings s(10000);
    Current c(5000);
    s.interest();
    c.overdraft();
}
