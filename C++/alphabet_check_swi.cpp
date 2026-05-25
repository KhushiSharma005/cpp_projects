#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"\nEnter any Character :";
    cin>>c;
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    cout<<"\nVowel";
    break;
        default:
        cout<<"\nConsonant";
        break;
    }
    return 0;
}