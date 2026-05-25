#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"\nEnter any number :";
cin>>n;
auto sq=[](int x){return x*x;};
cout<<"Square = "<<sq(n);
}