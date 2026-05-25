#include<iostream>
using namespace std;
 int main()
 {
    int n1 = 0, n2 = 1, n3, i= 3;
    cout << n1 << " " << n2 << " ";

    while (i <= 15)
   {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
        i=i+1;
    }
    return 0;
 }