#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\nEnter current year :";
    cin>>a;
    cout<<"\nEnter joined year :";
    cin>>b;
    if ((a-b)>3)
    {
        cout<<"\nBonus Rs2500";
    }
    else
    {
        cout<<"\nNo Bonus";
    }
    return 0;
}