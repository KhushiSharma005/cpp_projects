#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter day :";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"\nMonday";
        break;
    
    case 2:
        cout<<"\nTuesday";
        break;
    case 3:
        cout<<"\nWednesday";
        break;
    case 4:
        cout<<"\nThursday";
        break;
    case 5:
        cout<<"\nFriday";
        break;
    case 6:
        cout<<"\nSaturday";
        break;
    case 7:
        cout<<"\nSunday";
    default: 
        cout<<"\nInvalid";           

    }
    return 0;
}