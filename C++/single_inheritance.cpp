#include<iostream>
using namespace std;
class vehicle
{
    public:
    vehicle()
    {
        cout<<"This is a vehicle"<<endl;
    }
};
class car :public vehicle
{
    public:
    car()
    {
   cout<<"This is a Car"<<endl;
    }
};
int main()
{
    car obj;
    return 0;
}