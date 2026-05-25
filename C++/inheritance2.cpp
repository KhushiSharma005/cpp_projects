#include<iostream>
using namespace std;
class Employee {
protected:
    int id;
    string name;
    float salary;
public:
    Employee(int i, string n, float s) {
        id=i; name=n; salary=s;
    }
    virtual void display() {
         cout << salary << endl;
    }

};

class Manager : public Employee {
    float bonus;
public:
    Manager(int i,string n,float s,float b)
        : Employee(i,n,s) {
        bonus=b;
    }
    void display() override {
        cout << "Total Salary = " << salary + bonus << endl;
    }
};
int main()
{
   Manager m(222,"amit",20000,1500);
   m.display(); 
}
