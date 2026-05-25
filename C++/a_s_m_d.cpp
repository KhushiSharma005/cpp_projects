#include <iostream>
using namespace std;
int main()
{
    int n,b,c,res;
    cout<<"\nEnter any two numbers :";
    cin>>n>>b;
    cout<<"\nEnter character (1 for add, 2 for subtract,3 for multiply ,4 for division):";
    cin>>c;
    if (c==1)
    {
        res=n+b;
        cout<<"\nAddition is:"<<res;
    }
    else if (c==2)
    {
        res=n-b;
        cout<<"\nSubtraction is :"<<res;
    }
    else if (c==3)
    {
        res=n*b;
        cout<<"\nMultiplication is :"<<res;
    }
    else if (c==4)
    {
        res=n/b;
        cout<<"\nDivision is :"<<res;
    }
    else 
    {
        cout<<"\nInvalid";
    }
return 0;
}