#include <iostream>
using namespace std;
class Student 
{
    int r;
    int *p;
    string n;
    public:
        Student()
        {
            r = 0;
            n="";
            p = new int;
            *p = 10;
            cout<<"\nDefault Contructor";
        }
        Student(int rol, string nam)
        {
            r = rol;
            n = nam;
            cout<<"\nParameterized Constructor";
            cout<<"\n"<<*p;
        }
        //Copy constructor
        Student(Student &st)
        {
            r = st.r;
            n = st.n;
        }
        //Dynamic Constructor
        
        void show()
        {
            cout<<"\nRoll No. is : "<<r;
            cout<<"\nName is : "<<n;
        }
        ~Student()
        {
            cout<<"\nDestructor Called";
        }
};
int main()
{
    Student s;
    Student s1(12,"Ram");
    Student s2 = s1;
    Student s3(s1);
    s.show();
    s1.show();
    s2.show();
    s3.show();
    return 0;
}