#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter your weight :";
    cin>>n;
    if (n<=20)
    cout<<"\nUnder weight";
    else if (n<=25)
    cout<<"\nNormal";
    else if (n<=30)
    cout<<"\nOver weight";
    else
    cout<<"\nObese";
    return 0;  
}