#include <iostream>
using namespace std;
int main()
{
    int l,b,a,p;
    cout<<"\nEnter length of rectangle :";
    cin>>l;
    cout<<"\nEnter breadth of rectangle :";
    cin>>b;
    a=l*b;
    p=2*(l+b);
    if (a>p)
    {
       cout<<"\nArea of rectangle :"<<a; /* code */
    }
    else
    {
        cout<<"\nPerimeter of rectangle :"<<p;
    }
    return 0;
}