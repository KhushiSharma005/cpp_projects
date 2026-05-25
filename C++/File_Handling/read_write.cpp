#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string filename;
    cout<<"\nEnter File Name to Perform Reading + Writing Operations : ";
    cin>>filename;
    fstream file(filename,ios::in | ios::out | ios::app);
    file<<"New Data\n";
    file.seekg(0);
    string line;
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();
    return 0;
}

/*

        seekg() = read pointer ko move karega
        seekp() = write pointer ko move karega
        tellg() = current read pointer ki position batata hai
        tellp() = put pointer ki current position batata hai.
        
*/