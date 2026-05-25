#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers :";
    cin>>a>>b>>c;
    if (a>b)
    {
     if (a>c)
     {
        cout<<"\nGreatest no. is :"<<a;
     }
     else 
     {
        cout<<"\nGreatest no. is :"<<b;
     } 
    }
    
   else if (c>a)
    {
        if (c>b)
        {
            cout<<"\nGreatest no. is :"<<c;

        }
    
    else
    {
        cout<<"\nGreatest no. is :"<<b;
    }
    }
    else
    {
cout<<"\nInvalid";
    }
    return 0;
    
}