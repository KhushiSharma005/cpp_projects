#include <iostream>
using namespace std;
int main()
{
    int h,e,m,s,c,t;
    float p;
    cout<<"\nEnter marks in Hindi :";
    cin>>h;
    cout<<"\nEnter marks in English :";
    cin>>e;
    cout<<"\nEnter marks in Maths :";
    cin>>m;
    cout<<"\nEnter marks in Science :";
    cin>>s;
    cout<<"\nEnter marks in Computer :";
    cin>>c;
    t=h+e+m+s+c;
    p=(t/500.0)*100.0;
    cout<<"\nTotal is :"<<t;
    cout<<"\nPercentage is :"<<p;
    if (p>=60)
    cout<<"\nFirst Division";
    else if (p>=45)
    cout<<"\nSecond Division";
    else if (p>=36)
    cout<<"\nThird Division";
    else
    cout<<"\nFail";
    return 0;
    
    
    
}