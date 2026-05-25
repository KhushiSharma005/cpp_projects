#include <iostream>
using namespace std;
int main()
{
    int d,m;
    cout<<"\nEnter the month :";
    cin>>m;
    cout<<"\nEnter the day :";
    cin>>d;
    if(m==1)
    {
      if(d<=31)
      {
      cout<<"\nJanuary,"<<d;  /* code */
      }
      else 
      {
        cout<<"\nInvalid days in month of Jan";
      }
    }
    else if(m==2)
    {
        if(d<=29)
            {
                cout<<"\nFeb,"<<d;
            }
            else
            {
                cout<<"\nInvalid days in month of feb";
            }
    }
    else if (m==3)
    {
     if (d<=31)
     {
        cout<<"\nMarch,"<<d;
     }
     else
     {
        cout<<"\nInvalid days in month of March";
     }
     
    }
    else if (m==4)
    {
        if (d<=30)
        {
          cout<<"\nApril,"<<d;  /* code */
        }
        else 
        {
            cout<<"\nInvalid days in month of April";
        }
        
    }
    else if (m==5)
    {
      if (d<=31)
      {
        cout<<"\nMay,"<<d;
      }
      else
      {
        cout<<"\nInvalid days in month of May";
      }
      
    }
    else if (m==6)
    {
      if (d<=30)
      {
    cout<<"\nJune,"<<d;       
      }
      else
      {
        cout<<"\nInvalid days in month of June";
      }
      
    }
    else if (m==7)
    {
      if (d<=31)
      {
        cout<<"\nJuly,"<<d;
      }
        else
        {
            cout<<"\nInvalid days in month of July";
        }
    }
    else if (m==8)
    {
        if (d<=31)
        {
        cout<<"\nAugust,"<<d;
        }
        else
        {
            cout<<"\nInvalid days in month of August";
        }
    }
    else if (m==9)
    {
        if (d<=30)
        {
            cout<<"\nSeptember,"<<d;
        }
        else
        {
            cout<<"\nInvalid days in month of September";
        }
    }
    else if (m==10)
    {
    if (d<=31)
    {
        cout<<"\nOctober,"<<d;
    }
    else 
    {
        cout<<"\nInvalid days in month of October";
    }
    }
    else if (m==11)
    {
    if (d<=30)
    {
        cout<<"\nNovember,"<<d;
    }
    else
    {
        cout<<"\nInvalid days in month of November";
    }
    
    }
    else if (m==12)
    {
        if (d<=31)
        {
            cout<<"\nDecember,"<<d;
        }
        else
        {
            cout<<"\nInvalid days in month of December";
        }
    }
    else 
    {
        cout<<"\nInvalid";
    }
    
    return 0;
    
    
}