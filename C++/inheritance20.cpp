#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
};

class Square : public Shape {
    float s;
public:
    Square(float s){ this->s=s; }
    float area()
    { 
        return s*s; 
    }
};

int main()
{
    float s; cin>>s;
    Square sq(s);
    cout<<sq.area();
}