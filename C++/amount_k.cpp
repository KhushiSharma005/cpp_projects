# include <iostream>
using namespace std;
int main()
{
    int n,a,b,c;
    cout<<"\nEnter Amonut to withdraw :";
    cin>>n;
    a=n/100;
    cout<<"\nNotes of hundred :"<<a;
    b=n%100/50;
    cout<<"\nNotes of fifty :"<<b;
    c=((n%100)%50)/10;
    cout<<"\nNotes of ten :";
    return 0;

}