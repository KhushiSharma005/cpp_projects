#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"\nEnter year :";
    cin>>y;
    y%4==0?cout<<"\nLeap year":cout<<"\nNot Leap year";
    return 0;
}