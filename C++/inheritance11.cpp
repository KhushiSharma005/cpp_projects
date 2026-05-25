#include <iostream>
using namespace std;

class Shape 
{
public:
    virtual void area() = 0;
};

class Circle : public Shape 
{
    int r;
public:
    Circle(int x)
    {
         r = x; 
    }
    void area() {
        cout << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape 
{
    int l, b;
public:
    Rectangle(int x, int y) 
    {
        l = x;
        b = y;
    }
    void area() 
    {
        cout << l * b << endl;
    }
};
int main()
{
    Shape* s1 = new Circle(5);
    Shape* s2 = new Rectangle(4, 6);
    s1->area();
    s2->area();
}
