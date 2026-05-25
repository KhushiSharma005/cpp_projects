#include<iostream>
using namespace std;
int main()
{
    int roll,m;
    char name[30];
    cout<<"\nEnter your name : ";
    cin>>name;
    cout<<"\nEnter your Roll no. :";
    cin>>roll;
    cout<<"Enter number of subjects :";
    cin>>m;
    cout<<"\nEnter marks in "<<m<<" subjects :";
    float*arr =new float[m];
    float s=0;
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
        s+=arr[i];
    }
    float average=s/m;
    cout<<"\nResult is :"<<average;
    delete[]arr;
}