#include <iostream>
using namespace std;
int main()
{
    int n;
    float d,h,g;
    cout<<"\nEnter Basic salary :";
    cin>>n;
if (n>1500)
{
   d=n*(98.0/100.0);
 h=500.0;
}
 
else
{
    d=n*(90.0/100.0);
    h=n*(10.0/100.0);
}
    g=n+d+h;
    cout<<"\nGross salary :"<<g;

return 0;
}