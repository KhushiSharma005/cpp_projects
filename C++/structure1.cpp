#include <iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int roll_no;
    float marks[5];
    float t=0, p;
    cout<<"Enter your name: ";
    getline(cin, name);
    cout<<"Enter your roll number: ";
    cin>>roll_no;
    cout << "Enter marks of 5 subjects:\n";
    for (int i=0;i<5;i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        t=t+marks[i];
    }
    p= t/5;
    cout<<"Name: " << name << endl;
    cout<<"Roll Number: " << roll_no << endl;
    cout<<"Total Marks: " << t << endl;
    cout<<"Percentage: " << p << "%" << endl;

    return 0;
}