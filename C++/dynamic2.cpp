#include<iostream>
using namespace std;
int main()
{
 float n;
 float*salary=new float;
 cout<<"\nEnter your salary : ";
 cin>>*salary;
 n=*salary+(*salary*0.1);
 cout<<"\nSalary after 10 percent increment :"<<n;
 return 0;
 delete[]salary;
}