#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"\nEnter any two floating numbers :";
    cin>>a>>b;
    auto add=[](auto x,auto y){return x+y;};
    cout<<"\nAddition is :"<<add(a,b);
}