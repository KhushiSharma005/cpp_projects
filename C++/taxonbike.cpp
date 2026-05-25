#include <iostream>
using namespace std;
int main()
{
    int n;
    float t;
    cout<<"\nEnter cost price of bike :";
    cin>>n;
    if (n>100000)
    t=n*(15.0/100.0); 
    else if (n>50000)
    t=n*(10.0/100.0);
    else
    t=n*(5.0/100.0);
    cout<<"\nTax on Bike is :"<<t;
    return 0;
}