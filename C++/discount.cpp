#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter amount of purchase :";
    cin>>n;
    if (n>1000)
    {
       cout<<"\nDiscount of 10 percent"; /* code */
    }
    else
    {
        cout<<"\nNo discount";
    }
    return 0;
}