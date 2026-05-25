#include<iostream>
using namespace std;
int main()
{
    int *arr = new int[5];
    cout << "\nEnter 5 integers:" <<"\n";
    for (int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout << "You entered: ";
    for (int i=0;i<5;i++) 
    {
        cout<<arr[i] << " ";
    }
    cout <<"\n";
    delete []arr;
}