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
    Student s = {101,"SAnt"};
    ofstream file("student.dat",ios::binary);
    file.write((char*)&s,sizeof(s));
    file.close();
    return 0;
}