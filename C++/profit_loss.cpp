#include <iostream>
using namespace std;
int main()
{
    int c,s,p,l;
    cout<<"\nEnter cost price of item :";
    cin>>c;
    cout<<"\nEnter selling price of item :";
    cin>>s;
    p=s-c;
    l=c-s;
    if (p>l)
    {
        cout<<"\nProfit :"<<p;/* code */
    }
    else
    {
        cout<<"\nLoss :"<<l;
    }
    return 0;
}