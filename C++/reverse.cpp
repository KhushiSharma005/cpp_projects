#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"\nEnter first digit :";
    cin>>a;
    cout<<"\nEnter second digit :";
    cin>>b;
    cout<<"\nEnter third digit :";
    cin>>c;
    d=(c*100)+(b*10)+a;
    cout<<"\nReverse of given digit is :"<<d;
    return 0;
}