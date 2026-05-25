#include<iostream>
using namespace std;
int main()
{
    int n;
    char ch;
    cout<<"\nEnter any character :";
    cin>>ch;
    auto character=[ch](char n){return  (ch>='A'&&ch<='Z') ?n=ch+32:
    n=ch-32;
    };
    cout<<"\nEnter character to convert into uppercase :"<<character(n);
}