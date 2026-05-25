#include<iostream>
using namespace std;
int main()
{
    int c,s,u,t;
    cout<<"\nEnter Customer Type (1 for wholeseller, 2 for Retailer):";
    cin>>c;
    cout<<"\nEnter units :";
    cin>>u;
    cout<<"\nEnter special customer or not( 1 for yes, 2 for not) :";
    cin>>s;
    if (u<=50)
    {
    switch (c)
    {
    case 1:
        t=u*60;
        break;
    case 2:
        t=u*70;
        break;    
    
    }
    }
    else if (u>50&&u<=100)
    {
    switch (c)
    {
    case 1:
        t=u*55;
        break;
    case 2:
        t=u*60;
    }
    }
    else if (u>100&&u<=200)
    {
    switch (c)
    {
    case 1:
        /* code */
        break;
    
    default:
        break;
    }
    }
    
    
}