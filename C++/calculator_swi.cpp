#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    char op;
    cout<<"\nEnter two numbers :";
    cin>>a>>b;
    cout<<"\nEnter Operator : ";
    cin>>op;
    switch (c)
    {
    case '+':
        c=a+b;
        break;
    case '-':
       c=a-b;
       break;
    case '*':
        c=a*b;
        break;
    case '/':
        c=a/b;
        break;
    default : cout<<"\nInvalid Operator";
    }
    cout<<"\nResult is : "<<c;
    return 0;
}