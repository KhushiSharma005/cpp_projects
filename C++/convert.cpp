#include <iostream>
using namespace std;
int main()
{
    int f;
    float c;
    cout<<"\nEnter the temperature in fahrenheit :";
    cin>>f;
    cout<<"\nT ="<<f;
    c=(f-32)*5/9;
    cout<<"\nTemperature in celsius is :"<<c;
    return 0;
}