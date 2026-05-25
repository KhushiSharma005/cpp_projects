#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int roll;
    float marks;
public:
    void input()
    {
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"\nEnter your roll no. : ";
        cin>>roll;
        cout<<"\nEnter your Marks : ";
        cin>>marks;
    }
    void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Roll no. :"<<roll<<endl;
        cout<<"Marks : "<<marks<<endl;
    }
};
int main()
{
    student a,b,c;
    cout<<"\nEnter details of student first : \n";
    a.input();
    cout<<"\nEnter details of student second : \n";
    b.input();
    cout<<"\nEnter details of student third : \n";
    c.input();
    cout<<"\n Student Details \n";
    a.display();
    b.display();
    c.display();
    return 0;
}

