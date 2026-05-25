#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter any no. :";
    cin>>n;
    if (n>0)
    {
       cout<<"\nPositive no. "; /* code */
    }
    else
    {
        if (n<0)
        {
           cout<<"\nNegative no."; /* code */
        }
        else
        {
            cout<<"\nZero";
        }
        
    }
    return 0;
}