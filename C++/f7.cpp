#include<iostream>
using namespace std;
int add(int a,int b)
{
    return(a+b);
}
int main()
{
    int sum;
    int a,b;
    cout<<"enter the numbers :";
    cin>>a>>b;
    sum=add(a,b);
    cout<<"a + b = "<<sum<<endl;
    return 0;
}