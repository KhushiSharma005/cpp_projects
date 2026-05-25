#include <iostream>
using namespace std;
int main()
{
    int n,m;
    float a,w,e;
    cout<<"\nEnter no. of item 1 :";
    cin>>n;
    cout<<"\nEnter Weight of item 1 :";
    cin>>w;
    cout<<"\nEnter no. of item 2 :";
    cin>>m;
    cout<<"\nEnter Weight of item 2 :";
    cin>>e;
    a=((n*w)+(m*e))/(w+e);
    cout<<"\nAverage value of the items : "<<a;
    return 0;
}