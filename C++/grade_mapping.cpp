#include <iostream>
using namespace std;
int main()
{
    char m;
    cout<<"\nEnter your Grade :";
    cin>>m;
    cout<<"\nGrade :"<<m;
    if (m=='e')
    cout<<"\nExcellent";
    else if (m=='v')
    cout<<"\nVery Good";
    else if (m=='g')
    cout<<"\nGood";
    else if (m=='a')
    cout<<"\nAverage";
    else if (m=='f')
    cout<<"\nFail";
    else
    cout<<"\nInvalid";
    return 0;   
}