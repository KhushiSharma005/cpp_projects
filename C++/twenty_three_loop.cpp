#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while (i<=30)
    {
       if (i%2!=0&&i%5!=0)
       cout<<i<<" ";
       i=i+1;
    }
    return 0;
}