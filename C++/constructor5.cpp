#include <iostream>
#include <cmath>
using namespace std;

class Point 
{
public:
    int x, y;
    Point(int a, int b) 
    {
        x = a;
        y = b;
    }
};

class Line
{
    Point p1, p2;

public:
    Line(Point a, Point b) : p1(a), p2(b) {}

    void length() {
        float l = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
        cout << "Line Length: " << l << endl;
    }
};

int main() {
    Point a(2, 3), b(6, 7);
    Line l(a, b);
    l.length();
    return 0;
}