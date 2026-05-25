#include<iostream>
using namespace std;
int main()
{
 int i,d,s,y,r;
 cout<<"\nEnter Employee's id :";
 cin>>i;
 cout<<"\nEnter Department (1 for HR, 2 for IT, 3 for Sales):";
 cin>>d;
 cout<<"\nEnter your Salary :";
 cin>>s;
 cout<<"\nEnter years of working :";
 cin>>y;
 cout<<"\nEnter Rating (1 for A, 2 for B, 3 for C):";
 cin>>r;
 if (d==2&&y>5&&r==1)
 {
 cout<<"\nBonus = 20%";
 }
 else if (s<30000||d==1)
 {
  cout<<"\nBonus = 15%";
 }
 else if (r==3)
 {
 cout<<"\nBonus = 5%";
 }
 else
 {
    cout<<"\nBonus =10%";
 }
 return 0;
}