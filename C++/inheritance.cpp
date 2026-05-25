#include<iostream>
using namespace std;
class student
{
    public:
    void subject()
    {
        cout<<"Subject taken by student "<<endl;
    }
};
class khushi :public student
{
    public:
    void subject()
    {
        cout<<"Science";
    }
};
class neha :public student
{
    public:
    void subject()
    {
        cout<<"Commerce";
    }
};
class harshita :public student
{
    public:
    void subject()
    {
        cout<<"Arts";
    }
};
int main()
{
    khushi k;
    k.subject();
    neha n;
    n.subject();
    harshita h;
    h.subject();
    return 0;
}


