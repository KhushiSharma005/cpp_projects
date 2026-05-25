#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter Password:";
    cin>>n;
    do
    {
    cout<<"\nEnter Password :";
    cin>>n;
    } while (n!=9876);
    return 0;
    }