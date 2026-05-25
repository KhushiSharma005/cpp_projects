#include<iostream>
using namespace std;
int main()
{
int u;
char c;
float b;
cout<<"\nCustomer Name :";
cin>>c;
cout<<"\nUnits Consumed :";
cin>>u;
if (u>=0&&u<=100)
{
b=u*5;
}
else if (u>=101&&u<=300)
{
b=u*8;
}
else if (u>=301&&u<=500)
{
b=u*10;
}
else

{
b=u*12;
}

cout<<"\nAmount ="<<b;
return 0;
}