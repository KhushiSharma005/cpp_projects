#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter the size of array :";
    cin>>n;
    float*arr = new float[n];
    float s=0;
    cout<<"\nEnter Marks :";
    for (int i=0;i<n;i++)
    {
     cin>>arr[i];
     s+=arr[i];
    }
    float average =s/n;
    cout<<"\nAverage  :"<<average<<"\n";
    for (int i=0;i<n;i++)
    {
        if (arr[i]>average)
        {
            cout<<"\nAbove Average marks :"<<arr[i];
        }
        
    }
    
    delete[]arr;
}