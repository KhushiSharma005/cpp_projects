#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,d,e,f,g,h,i,j;
    cout<<"\nEnter the amount :";
    cin>>n;
    a=n/2000;
    cout<<"\nNotes of 2000 are :"<<a;
    b=(n%2000)/500;
    cout<<"\nNotes of 500 are :"<<b;
    c=((n%2000)%500)/200;
    cout<<"\nNotes of 200 are :"<<c;
    d=(((n%2000)%500)%200)/100;
    cout<<"\nNotes of 100 are :"<<d;
    e=((((n%2000)%500)%200)%100)/50;
    cout<<"\nNotes of 50 are :"<<e;
    f=(((((n%2000)%500)%200)%100)%50)/20;
    cout<<"\nNotes of 20 are :"<<f;
    g=((((((n%2000)%500)%200)%100)%50)%20)/10;
    cout<<"\nNotes of 10 are :"<<g;
    h=(((((((n%2000)%500)%200)%100)%50)%20)%10)/5;
    cout<<"\nNotes of 5 are :"<<h;
    i=((((((((n%2000)%500)%200)%100)%50)%20)%10)%5)/2;
    cout<<"\nCoins of 2 are :"<<i;
    j=(((((((((n%2000)%500)%200)%100)%50)%20)%10)%5)%2)/1;
    cout<<"\nCoins of 1 are :"<<j;
    return 0;
}