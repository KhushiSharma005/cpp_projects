#include<iostream>
using namespace std;
class person
{
    protected:
    string name;
    int age;
    public:
    person(string n,int a)
    {
      name=n;
      age=a;
    }
};
class student : public person
{
    public:
    int roll;
    float marks;
    student(string n,int a,int r,float m) :person(n,a)
    {
        roll=r; 
        marks=m;
        name=n;
        age=a;
    }
    void display()
    {
        cout<<name<<"  "<<age<<"  "<<roll<<"  "<<marks<<endl;
    }
};
int main()
{
student s("khushi",20,567,85.78);
s.display();
}