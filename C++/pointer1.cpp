#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4};
    int *p=&a[3];
    while (p>=a)
    {
    cout<<*p<<endl;
    p--;
    }
    
}
