#include<iostream>
using namespace std;
int main()
{
    char n[30];
    int s;
    cout<<"\nEnter name of Employee :";
    cin>>n;
    cout<<"\nEnter shift Code :";
    cin>>s;
    if (s==1)
    cout<<"\nMorning Shift";
    else if (s==2)
    cout<<"\nAfternoon Shift";
    else if (s==3)
    cout<<"\nNight Shift";
    else
    cout<<"\nInvalid";
    return 0;
}