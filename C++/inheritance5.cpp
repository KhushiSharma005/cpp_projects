#include <iostream>
using namespace std;
class Shape 
{
public:
    virtual int area() 
    {
        return 0;
    }
};

class Rectangle : public Shape
{
    int l=5;
    int b=4;
public:
    int area() override 
    {
        return l*b;
    }
};

int main() 
{
    Shape*s = new Rectangle();
    cout<<s->area();
}