#include <iostream>
using namespace std;

class Teacher 
{
public:
    int hours = 10;
};

class Researcher 
{
public:
    int papers = 5;
};

class Professor : public Teacher, public Researcher 
{
public:
    void display()
    {
        cout << hours << " " << papers << endl;
    }
};

int main() 
{
    Professor p;
    p.display();
}
