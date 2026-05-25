#include <iostream>
using namespace std;
class Rectangle 
{
    int length, width;
public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    int area() 
    {
        return length * width;
    }
};

int main() 
{
    Rectangle r1(5, 4);
    Rectangle r2(10, 3);
    cout << "Area of first rectangle : " << r1.area() << endl;
    cout << "Area of second rectangle : " << r2.area() << endl;
    return 0;
}