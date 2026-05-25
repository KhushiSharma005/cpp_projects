#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter any no. :";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"\nOne";
        break;
    case 2:
        cout<<"\nTwo";
        break;
    case 3:
        cout<<"\nThree";
        break;
    
    default: 
    cout<<"\nOther number";
        break;
    }
    return 0;
}