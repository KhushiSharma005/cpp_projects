#include<iostream>
using namespace std;
class Animal
{
public:
virtual void sound()
{
    cout<<"Animal sound ";
}
};
class dog :public Animal
{
    void sound()override
    {
        cout<<"bark";
    }
};
int main()
{
    Animal*a=new dog();
    a->sound();
}