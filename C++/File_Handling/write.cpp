#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream file("data.txt");
    file<<"SAnt Kumar JAngid\n";
    file<<"MCA\n";
    file<<"Unique Computers\n";

    file.close();
    cout<<"\nData Written in File Successfully!!!";
    return 0;
}
