#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    auto maximum=[](int x,int y){return (x>y)?x:y;};
    cout<<"\nMaximum is :"<<maximum(a,b);
}