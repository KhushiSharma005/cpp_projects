#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter your height :";
    cin>>n;
    if (n<150)
    cout<<"\nDwarf";
    else if (n<165)
    cout<<"\nAverage Height";
    else if (n>=165)
    cout<<"\nTall";
    else
    cout<<"\nInvalid";
    return 0;
    
    
    
}