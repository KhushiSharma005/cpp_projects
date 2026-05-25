#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"\nEnter the value of X-axis :";
    cin>>x;
    cout<<"\nEnter the value of Y-axis :";
    cin>>y;
    if (x>0)
    {
     if (y>0)
     {
        cout<<"\nFirst Quadrant";
     }
     
    }
    else if (x<0)
    {
        if (y>0)
        {
         cout<<"\nSecond Quadrant";
        }
        else
        {
            cout<<"\nThird Quadrant";
        }
        
    }
    else  if (y<0)
    {
        if (x>0)
        {
            cout<<"\nFourth Quadrant";
        }
    }
        
      else if (y==0)
    {
        if (x>0)
        {
            cout<<"\nOn X-axis";
        }
        else 
        {
         cout<<"\nOn X-axis";
        }
    
        
    }
    else if (x==0)
    {
      if (y>0)
      {
        cout<<"\nOn Y-axis";
      }
      else 
      {
        cout<<"\nOn Y-axis";
      }
    }
     else
    {
     if (x==0)
     {
        if (y==0)
        {
            cout<<"\nLies on Origin";
        }
        
     }
      
    }

    
    return 0;
}