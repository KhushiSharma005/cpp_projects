#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter any Number :";
    cin>>n;
    n>0?cout<<"\nPositive":n<0?cout<<"\nNegative":n==0?cout<<"\nZero":cout<<"\nDon't";
    return 0;
}