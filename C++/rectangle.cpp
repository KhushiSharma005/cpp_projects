#include<iostream>
using namespace std;
int main()
{
    int l,w,a,p;
    cout<<"\nEnter lenght of rectangle :";
    cin>>l;
    cout<<"\nEnter width of rectangle :";
    cin>>w;
    cout<<"\nlenght="<<l;
    cout<<"\nWidth="<<w;
    a=l*w;
    cout<<"\nArea of rectangle is :"<<a;
    p=2*(l+w);
    cout<<"\nPerimeter of rectangle is :"<<p;
    return 0;
}