#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"\nEnter size of array :";
 cin>>n;
 int *arr = new int[n] ;
 cout<<"\nEnter "<<n<<" Number :"<<"\n";
 for (int i=0; i<n;i++)
 {
    cin>>arr[i];
 }
 int s=0;
 for (int i=0;i<n;i++)
 {
    s=s+(*(arr+i));
 }
 cout<<"\nSum is :"<<s;
 delete []arr;
 return 0;
}