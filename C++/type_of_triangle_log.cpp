#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\nEnter three sides of triangle :";
    cin>>a>>b>>c;
    if (a==b&&b==c&&c==a)
    cout<<"\nEquilateral Triangle";
    else if (a==b||b==c||c==a)
    cout<<"\nIsoceles Triangle";
    else if (a!=b&&b!=c&&c!=a)
    cout<<"\nScalene Triangle";
    else
    cout<<"\nRight Angled Triangle";
    return 0;
}