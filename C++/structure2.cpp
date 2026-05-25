#include<iostream>
#include<string>
using namespace std;
struct student
{
    int r;
    string n;
    float a,b,c,d,e;
};
int main()
{
    float t=0,p;
struct student s;
cout<<"\nEnter your roll no. :";
cin>>s.r;
cout<<"\nEnter your name :";
getline(cin,s.n);
cin>>s.n;
cout<<"\nEnter marks in five subjects :";
cin>>s.a>>s.b>>s.c>>s.d>>s.e;
cout<<"\nName :"<<s.n<<endl;
cout<<"Roll no. :"<<s.r<<endl;
cout<<"Marks : "<<s.a<<"\n"<<s.b<<"\n"<<s.c<<"\n"<<s.d<<"\n"<<s.e;
t=s.a+s.b+s.c+s.d+s.e;
p=(t/5);
cout<<"\nPecentage : "<<p;
return 0;
}

