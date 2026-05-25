#include<iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <= 20) 
    {
        if (i % 3 != 0)
            cout << i << " ";
            i=i+1;
    }
    return 0;
}
