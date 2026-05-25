#include<iostream>
using namespace std;
class vehicle{
protected:
string brand;
int speed;
public:
vehicle(string b,int s)
{
    brand=b;
    speed=s;
}
};
class car :public vehicle {
string fueltype;
int seats;
public:
car(string b,int s,string f,int se):vehicle(b,s){
    fueltype=f;
    seats=se;
}
void show()
{
    cout<<"\nbrand :"<<brand;
    cout<<"\nspeed :"<<speed;
    cout<<"\nfueltype :"<<fueltype;
    cout<<"\nseats :"<<seats;
}
};
int main()
{
    string brand,fueltype;
    int speed,seat;
    cout<<"Enter brand  speed fueltype  seats :";
    cin>>brand>>speed>>fueltype>>seat;
    car c(brand,speed,fueltype,seat);
    c.show();
    return 0;
}