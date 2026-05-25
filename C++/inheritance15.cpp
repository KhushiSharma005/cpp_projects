#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"Base Constructor\n";
    }
};
class derived :public base
{
    public:
derived()
{
    cout<<"Derived Constructor\n";
}
~derived()
{
    cout<<"Derived Distructor\n";
}
};
int main()
{
    derived d;
}