#include <iostream>
using namespace std;
int main() 
{   
    int *n= new int;          
    cout << "Enter an integer: ";
    cin >> *n;                 

    cout << "Value = " << *n<<endl;
    cout << "Memory Address = " <<n<<endl;
    delete[]n;
    return 0;
}