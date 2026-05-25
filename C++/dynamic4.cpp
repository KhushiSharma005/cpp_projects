#include<iostream>
using namespace std;
int main()
{
    char *a = new char[20];
    cout << "\nEnter a string: ";
    cin>>a;
    cout << "You entered: " <<a<<"\n";
    delete []a;
}