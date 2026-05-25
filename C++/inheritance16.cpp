#include<iostream>
using namespace std;
class base
{
public:
virtual~base(){
    cout<<"Base Destroyed\n";
}
};
class derived:public base{
    public:
    ~derived()
    {
        cout<<"Derived Destroyed\n";
    }
};
int main()
{
    base*b=new derived;
    delete b;
}