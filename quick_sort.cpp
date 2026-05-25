#include <iostream>
#include <stack>
using namespace std;
int partition(int a[], int low,int high)
{
    int temp;
    int pivot = a[high];
    int i = low-1;
    for(int j=low;j<high;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[i+1];
    a[i+1] = a[high];
    a[high] = temp;
    return i+1;
}
void quick(int a[], int n)
{
    stack<int> s;
    s.push(0);
    s.push(n-1);
    while(!s.empty())
    {
        int high = s.top();
        s.pop();
        int low = s.top();
        s.pop();

        int pi = partition(a,low,high);
        //Left Side
        if(pi-1>low)
        {
            s.push(low);
            s.push(pi-1);
        }
        //Right Side
        if(pi+1<high)
        {
            s.push(pi+1);
            s.push(high);
        }
    }
}
int main()
{
    int a[] = {123,32,132,3,23,4,35,5,45};
    int n = 9;
    quick(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}