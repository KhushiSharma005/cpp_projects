#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter any number :";
    cin>>n;
    auto func=[](int x){return (x%2==0)?"Even":"Odd"; };
    cout<<"\nNumber is :"<<func(n);

}