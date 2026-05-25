#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<"\nEnter temperature :";
    cin>>t;
    cout<<"\nTemperature :"<<t;
    if (t<0)
    cout<<"\nFreezing Weather";
    else if (t<10)
    cout<<"\nVery Cold Weather";
    else if (t<20)
    cout<<"\nCold Weather";
    else if (t<30)
    cout<<"\nNormal in Temp";
    else if (t<40)
    cout<<"\nIt's Hot";
    else if (t>=40)
    cout<<"\nIt's Very Hot";
    else
    cout<<"\nInvalid";
    return 0;  
}