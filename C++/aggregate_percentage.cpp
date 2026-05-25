#include <iostream>
using namespace std;
int main()
{
    int h,e,m,s,c,t;
    float p;
    cout<<"\nEnter marks in hindi :";
    cin>>h;
    cout<<"\nEnter marks in english ";
    cin>>e;
    cout<<"\nEnter marks in maths :";
    cin>>m;
    cout<<"\nEnter marks in science :";
    cin>>s;
    cout<<"\nEnter marks in computer :";
    cin>>c;
    t=h+e+m+s+c;
    cout<<"\nTotal marks ="<<t;
    p=t/5;
    cout<<"\nPercentage is :"<<p;
    return 0;
}