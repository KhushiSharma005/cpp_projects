#include <iostream>
using namespace std;
int main()
{
    int t;
    float h,c;
    cout<<"\nEnter hardness of steel :";
    cin>>h;
    cout<<"\n Enter carbon content of steel :";
    cin>>c;
    cout<<"\nEnter tensile strength of steel :";
    cin>>t;
    if (h>50&&c<0.7&&t>5600)
    cout<<"\nGrade : 10";
    else if (h>50&&c<0.7)
    cout<<"\nGrade : 9";
    else if (c<0.7&&t>5600)
    cout<<"\nGrade : 8";
    else if (h>50&&t>5600)
    cout<<"\nGrade : 7";
    else if (h>50||c<0.||t>5600)
    cout<<"\nGrade :6";
    else
    cout<<"\nGrade :5";
    return 0;
}