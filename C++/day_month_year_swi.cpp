#include<iostream>
using namespace std;
int main()
{
    int d,m,y;
    cout<<"\nEnter day :";
    cin>>d;
    cout<<"\nEnter month :";
    cin>>m;
    cout<<"\nEnter year :\n";
    cin>>y;
    if (d==1||d==21||d==31)
    {
    cout<<d<<"st";
    }
    else if (d==2||d==22)
    {
    cout<<d<<"nd";
    }
    else if (d==3||d==23)
    {
    cout<<d<<"rd";
    }
    else
    cout<<d<<"th";
    
    switch (m)
    {
    case 1:
    cout<<" January ,"<<y;
        break;
    case 2:
    cout<<" February ,"<<y;
        break;
    case 3:
    cout<<" March ,"<<y;
        break;
    case 4:
    cout<<" April ,"<<y;
        break;
    case 5:
    cout<<" May ,"<<y;
        break;
    case 6:
    cout<<" June ,"<<y;
        break;
    case 7:
    cout<<" July ,"<<y;
        break;
    case 8:
    cout<<" August ,"<<y;
        break;
    case 9:
    cout<<" September ,"<<y;
        break;
    case 10:
    cout<<" October ,"<<y;
        break;
    case 11:
    cout<<" November ,"<<y;
        break;
    case 12:
    cout<<" December ,"<<y;
        break;                                        
    default:
    cout<<"\nInvalid";
        break;
    }
   return 0;    
}