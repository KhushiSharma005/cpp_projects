#include <iostream>
using namespace std;
int main()
{
    int l,h;
    float s;
    cout<<"\nEnter your bad cholestrol :";
    cin>>l;
    cout<<"\nEnter your good cholestrol :";
    cin>>h;
    s=l/h;
    if (l<100)
    cout<<"\nlow cholestrol : great";
    else if (l<130)
    cout<<"\nlow cholestrol : pretty good";
    else if (l<160)
    cout<<"\nlow cholestrol : borderline";
    else if (l<190)
    cout<<"\nlow cholestrol : high";
    else if (l>189)
    cout<<"\nlow cholestrol : dangerously high ";
    if (h<40)
    cout<<"\ngood cholestrol : too low";
    else if (h<60)
    cout<<"\ngood cholestrol : okay";
    else if (h>59)
    cout<<"\ngood cholestrol : great";
    if (s<3.22)
    cout<<"\nldl/hdl : good ratio";
    else if (s>3.21)
    cout<<"\nldl/hdl : bad ratio ";
    else 
    cout<<"Invalid";
    return 0;       
}