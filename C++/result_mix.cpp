#include<iostream>
using namespace std;
int main()
{
    int r,a,b,c;
    char n[30];
    float d;
    cout<<"\nEnter your roll no.:";
    cin>>r;
    cout<<"\nEnter your name :";
    cin>>n;
    cout<<"\nEnter marks 1 :";
    cin>>a;
    cout<<"\nEnter marks 2 :";
    cin>>b;
    cout<<"\nEnter marks 3 :";
    cin>>c;
    cout<<"\nRoll no. :"<<r;
    cout<<"\nMarks 1:"<<a;
    cout<<"\nMarks 2:"<<b;
    cout<<"\nMarks 3:"<<c;
    if (a<35||b<35||c<35)
    {
    cout<<"\nFail";
    }
    else
    {
        d=(a+b+c)/3;
        cout<<"\nAverage Marks:"<<d;
    }
    if (d>=75)
    {
    cout<<"\nDistinction";
    }
    else if (d>=60)
    {
    cout<<"\nFirst Division";
    }
    else if (d>45)
    {
    cout<<"\nSecond Division";
    }
    else if (d>=35)
    {
        
        cout<<"\nPass";
    }
    return 0;
}