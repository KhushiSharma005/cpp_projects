#include <iostream>
using namespace std;

class Employee 
{
public:
    Employee()
    {
        cout << "Default Constructor\n";
    }

    Employee(int x)
    {
        cout << "Parameterized Constructor\n";
    }

    Employee(Employee &e) 
    {
        cout << "Copy Constructor\n";
    }
};

int main() {
    Employee e1;
    Employee e2(10);
    Employee e3 = e2;
    return 0;
}