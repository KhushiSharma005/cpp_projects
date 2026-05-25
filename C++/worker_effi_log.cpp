#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter time taken by worker to complete a particular job :";
    cin>>n;
    if (n>=2&&n<=3)
    cout<<"\nHighly Efficient";
    else if (n>=3&&n<=4)
    cout<<"\nImprove speed";
    else if (n>=4&&n<=5)
    cout<<"\nTraining to Improve Speed";
    else
    cout<<"\nLeave Company";
    return 0;
}