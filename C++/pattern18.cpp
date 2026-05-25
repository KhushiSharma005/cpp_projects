#include<iostream>
using namespace std;
int main()
{
   int n=1,c=4;  
    for(int i=4; i>=1; i--)
    {
        for(int j=1;j<=c;j++)
        {
            cout<<n;
            n++;
        }
        cout<<"\n";
        c--;  
    }
    return 0;
}