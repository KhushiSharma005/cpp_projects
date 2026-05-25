#include <iostream>
using namespace std;
int main()
{
    int b;
    float d,h,g;
    cout<<"\nEnter the basic salary :";
    cin>>b;
    d=b*0.4;
    cout<<"\nDearness allowance :"<<d;
    h=b*0.2;
    cout<<"\nHouse rent allowance :"<<h;
    g=b+d+h;
    cout<<"\nGross salary is :"<<g;
    return 0;
}