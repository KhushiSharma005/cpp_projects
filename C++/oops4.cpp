#include<iostream>
using namespace std;
class employee
{
private:
    int id;
    string name;
    float salary;
public:
    void input()
    {
     cout<<"\nEnter Id of employee : ";
     cin>>id;
     cout<<"\nEnter name of employee : ";
     cin>>name;
     cout<<"\nEnter monthly salary of employee : ";
     cin>>salary;
    }
float yearlysalary()
{
    return salary*12;
}
void display()
{
cout<<id<<"  "<<name<<"  "<<yearlysalary();
}
};
int main()
{
    employee e[5];
    int i;
    cout<<"\nEnter Five Employees Details : ";
    for(i=0;i<5;i++)
    {
        e[i].input();
    }
    cout<<"\nAll Employees Details are \n";
    for(i=0;i<5;i++)
    {
        e[i].display();
        cout<<"\n-----------------------------------------------------";    \
        cout<<"\n";    
    }
    return 0;
}
