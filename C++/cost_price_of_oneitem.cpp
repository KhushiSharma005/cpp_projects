#include <iostream>
using namespace std;
int main()
{
    int s,p,a;
    float c;
    cout<<"\nEnter selling price of 15 items :";
    cin>>s;
    cout<<"\nEnter total profit earned on them:";
    cin>>p;
    a=s-p;
    cout<<"\nTotal cost price of 15 items :"<<a;
    c=a/15;
    cout<<"\ncost price of one item :"<<c;
    return 0;

}