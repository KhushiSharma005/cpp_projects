#include <iostream>
using namespace std;
int main()
{
    int c;
    cout<<"\nEnter name of city (1 for Delhi, 2 for Agra, 3 for Jaipur) : ";
    cin>>c;
    if (c==1)
    cout<<"\nRed Fort";
    else if (c==2)
    cout<<"\nTaj Mahal";
    else if (c==3)
    cout<<"\nJal Mahal";
    else
    cout<<"\nInvalid city";
    return 0;
    
    
    
}