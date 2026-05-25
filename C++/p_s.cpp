#include <iostream>
using namespace std;
int main()
{
    int s,c;
    cout<<"\nEnter Cost price :";
    cin>>c;
    cout<<"\nEnter Selling price :";
    cin>>s;
    if (s>c)
    cout<<"\nProfit";
    else
    cout<<"\nLoss";
    return 0;
    
}