#include <iostream>
#include <fstream>
using namespace std;
class Student 
{
    public:
    int id;
    char name[10];
};
int main()
{
    ifstream file("student.dat",ios::binary);
    Student s;
    file.read((char*)&s,sizeof(s));
    cout<<"Id is : "<<s.id<<" and NAme is : "<<s.name;
    file.close();
    return 0;
}