#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"\nEnter first integer :";
    cin>>a;
    cout<<"\nEnter second integer :";
    cin>>b;
    c=a%b;
    d=a+(b-c);
    cout<<"\nRound off an integer first to the next largest multiple of another integer is : "<<d;
    return 0;
}