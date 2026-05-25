#include<iostream>
using namespace std;
class person
{
    protected:
    string name;
    public:
    person(string n)
    {
        name=n;
    }
    virtual void display()=0;
};
class student:public person
{
    public:
student(string n):person(n)
{
}
void display()
{
    cout<<"student"<<name;
}
};
class teacher: public person{
public:
teacher(string n):person(n)
{}
void display()
{
    cout<<"Teacher"<<name;
}
};
int main()
{
    string n;
    cin>>n;
    student s(n);
    teacher t(n);
    s.display();
    cout<<"\n";
    t.display();
}