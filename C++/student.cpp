#include <iostream>
using namespace std;
int main()
{
    int r,p,c,a,t;
    float d;
    char n[30];
    cout<<"\nEnter  Roll no. :";
    cin>>r;
    cout<<"\nEnter name :";
    cin>>n;
    cout<<"\nEnter marks in Physics :";
    cin>>p;
    cout<<"\nEnter marks in Chemistry :";
    cin>>c;
    cout<<"\nEnter marks in Computer Application :";
    cin>>a;
    cout<<"\nRoll no. :"<<r;
    cout<<"\nName of student :"<<n;
    cout<<"\nMarks in Physics :"<<p;
    cout<<"\nMarks in Chemistry :"<<c;
    cout<<"\nMarks in Computer Application :"<<a;
    t=p+c+a;
    cout<<"\nTotal Marks :"<<t;
    d=t/3;
    cout<<"\nPercentage :"<<d;
    if (d>=60)
    cout<<"\nDivision : First";
    else if (d>=48)
    cout<<"\nDivision : Second";
   else if (d>=36)
    cout<<"\nDivision : Pass";
    else
    cout<<"\nDivision : Fail";
    return 0;
}