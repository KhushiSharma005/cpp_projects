#include<iostream>
using namespace std;
int main()
{
    int p,a,c;
    float t;
    cout<<"\nEnter type of microprocessor in bit :";
    cin>>p;
    cout<<"\nEnter the amount of order : ";
    cin>>a;
    cout<<"\nEnter type of customer (1 for Industry, 2 for gov, 3 for uni) :";
    cin>>c;
    if (p!=32||p!=16||p!=8)
    {
    cout<<"\nNot Available";
    }
    
    if (p==32)
 {
    if (a<50000)
    {
    switch (c)
    {
    case 1:
        t=a-(a*0.05); 
        break;
    case 2:
        t=a-(a*(6.5/100));
        break;
    case 3:
        t=a-(a*(7.5/100));
        break;    
    }
    }
    else if (a>=50000&&a<100000)
    {
    switch (c)
    {
    case 1:
        t=a-(a*(7.5/100));
        break;
    case 2:
        t=a-(a*(8.5/100));
        break;
    case 3:
        t=a-(a*(7.5/100));
        break;
    }
    }
    else if (a>100000)
    {
    switch (c)
    {
    case 1:
        t=a-(a*0.1);
        break;
    case 2:
        t=a-(a*0.1);
        break;
    case 3:
        t=a-(a*(7.5/100));
        break;    
    }
    }
    
 }
    else if (p==16)
 {
    if (a<10000)
    {
    t=a;
    }
    else if (a>=10000)
    {
    switch (c)
    {
    case 1:
        t=a-(a*0.05);
        break;
    case 2:
        t=a-(a*0.05);
    case 3:
        t=a-(a*0.06);
        break;
    }
    }
    
  }
  else if (p==8)
  {
   t=a-(a*0.1);
  }
  cout<<"\nAmount payable by customer including discount :"<<t;
return 0;
}