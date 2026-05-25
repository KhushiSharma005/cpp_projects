#include<iostream>
using namespace std;
class landvehicle
{
    public:
    void landinfo()
    {
      cout<<"This is a land vehicle"<<endl;
    }
};
class watervehicle
{
    public:
    void waterinfo()
    {
        cout<<"This is water vehicle"<<endl;
    }
};
//derived class inheriting from both base class
class amphibiousvehicle : public landvehicle,public watervehicle
{
    public:
    amphibiousvehicle()
    {
        cout<<"This is Amphibious Vehicle"<<endl;
    }
};
int main()
{
    amphibiousvehicle obj;
    obj.landinfo();
    obj.waterinfo();
    return 0;
}
