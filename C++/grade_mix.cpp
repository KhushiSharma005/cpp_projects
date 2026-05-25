#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"\nEnter your marks :";
    cin>>m;
    m>=90?cout<<"\nGrade A":m>=75?cout<<"\nGrade B":m>=50?cout<<"\nGrade C":cout<<"\nFail";
    return 0;

}