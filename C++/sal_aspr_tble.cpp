#include <iostream>
using namespace std;
int main()
{
    int y,g,q;
    cout<<"\nEnter your gender(1 for male,2 for female) :";
    cin>>g;
    cout<<"\nEnter your Qualification (1 for post-graduate, 2 for graduate) :";
    cin>>q;
    cout<<"\nEnter your years of services :";
    cin>>y;
    if (g==1)
    {
      if (y>=10)
      {
        if (q==1)
        {
            cout<<"\nSalary = 15000";
        }
        else
        {
            cout<<"\nSalary = 10000";
        }

        
      }
       else
      {
        if (q==1)
        {
            cout<<"\nSalary = 10000";
        }
        else if (q==2)
        {
            cout<<"\nSalary = 7000";
        }
        
      }
      
      
    }
    else if (g==2)
    {
         if (y>=10)
        {
             if (q==1)
            {
                cout<<"\nSalary = 12000";
            }
            else 
            {
                cout<<"\nSalary = 9000";
            }
            
            
        }
        else
        {
        if (q==1)
            {
                cout<<"\nSalary = 10000";
            }
            else if (q==2)
            {
                cout<<"\nSalary = 6000";
            }
            

            
        }
    }
     
    return 0;
}