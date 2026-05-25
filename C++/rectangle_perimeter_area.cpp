#include <iostream>
using namespace std;
int main()
{
    int l,b;
    float r,a,p,c,d;
    cout<<"\nEnter length of rectangle :";
    cin>>l;
    cout<<"\nEnter breadth of rectangle :";
    cin>>b;
    cout<<"\nEnter radius of circle :";
    cin>>r;
    a=l*b;
    cout<<"\nArea of rectangle is :"<<a;
    p=2*(l+b);
    cout<<"\nPerimeter of rectangle is :"<<p;
    c=3.14*r*r;
    cout<<"\nArea of circle is :"<<c;
    d=2*3.14*r;
    cout<<"\nCircumference of circle is :"<<d;
    return 0;
}