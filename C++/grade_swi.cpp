#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"\nEnter your marks :";
    cin>>n;
    m=n/10;
    switch (m)
    {
    case 1:
        cout<<"\nFail";
        break;
    case 2:
    cout<<"\nFail";
    break;
    case 3:
    cout<<"\nFail";
    break;
    case 4:
    cout<<"\nFail";
    break;
    case 5:
    cout<<"\nGrade C";
    break;
    case 6:
    cout<<"\nGrade C";
     break;
     case 7:
     cout<<"\nGrade B";
     break;
     case 8:
     cout<<"\nGrade B";
     break;
     case 9:
     cout<<"\nGrade A";
     break;
     case 10:
     cout<<"\nGrade A";
     break;
    default:
      cout<<"\nInvalid";
        break;
    }
    return 0;
}