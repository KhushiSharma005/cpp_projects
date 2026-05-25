#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter your age :";
    cin>>n;
    if (n>=18)
    {
       cout<<"\nEligible for voting"; /* code */
    }
    else
    {
        cout<<"\nNot eligible for voting";
    }
    return 0;
}