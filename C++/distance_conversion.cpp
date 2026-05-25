#include <iostream>
using namespace std;
int main()
{
    float k,m,c,f,i;
    cout<<"\nEnter the distance between two cities in km :";
    cin>>k;
    m=k*1000;
    cout<<"\nDistance in meter :"<<m;
    c=k*100000;
    cout<<"\nDistance in centimeters :"<<c;
    f=k*3280.84;
    cout<<"\nDistance in feet :"<<f;
    i=k*39370.1;
    cout<<"\nDistance in inches :"<<i;
    return 0;
}