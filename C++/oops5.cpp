#include<iostream>
using namespace std;
class circle
{
public:
    float radius;
    float area()
    {
        return (3.14*radius*radius);
    }
    float circumference()
    {
        return (3.14*2*radius);
    }
};
int main()
{
    circle c;
    cout<<"\nEnter radius : ";
    cin >> c.radius;
    cout<<"\nArea of circle is : "<<c.area()<<endl;
    cout<<"Circumference of circle is : "<<c.circumference();
   return 0;
}


