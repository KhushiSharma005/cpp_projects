#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n)
     {
         name = n;
     }
};

class Employee : public Person {
protected:
    int id;
public:
    Employee(string n, int i) : Person(n) 
    {
         id = i;
    }
};

class Developer : public Employee {
    string language;
    int experience;
public:
    Developer(string n, int i, string l, int e)
        : Employee(n, i) 
    {
        language = l;
        experience = e;
    }

    void display() {
        cout << name << " " << id << " "
             << language << " " << experience << endl;
    }
};

int main() 
{
    Developer d("Rahul", 101, "C++", 3);
    d.display();
}
