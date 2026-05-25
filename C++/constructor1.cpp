#include<iostream>
using namespace std;
class student
{
private:
  int roll_no;
  string name;
public:
student()
{
    roll_no=0;
    name="Dummy";
}
void display()
{
    cout<<roll_no<<"  "<<name<<endl;
}
};
int main()
{
    student s1,s2,s3;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
