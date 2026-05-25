#include<iostream>
using namespace std;
int main()
{
    int h,e,m,s,c,t;
    float p;
    cout<<"\nMarks in hindi :";
    cin>>h;
    cout<<"\nMarks in english :";
    cin>>e;
    cout<<"\nMarks in maths :";
    cin>>m;
    cout<<"\nMarks in science:";
    cin>>s;
    cout<<"\nMarks in computer:";
    cin>>c;
    cout<<"\nH="<<h;
    cout<<"\nE="<<e;
    cout<<"\nM="<<m;
    cout<<"\nS="<<s;
    cout<<"\nC="<<c;
    t=h+e+m+s+c;
    cout<<"\nTotal is :"<<t;
    p=(t/500.0)*100.0;
    cout<<"\nPercentage is :"<<p;
    return 0;
}