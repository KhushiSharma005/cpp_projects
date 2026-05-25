#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"\nEnter size of array :";
   cin>>n;
  int *arr =new int[n];
   cout<<"\nEnter  Marks :"<<"\n";
   for (int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
    int maximum = arr[0];
    int minimum = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > maximum) maximum = arr[i];
        if(arr[i] < minimum) minimum = arr[i];
    }

    cout << "Maximum = " << maximum << endl;
    cout << "Minimum = " << minimum;

    delete[] arr;
   
}