#include <iostream>
using namespace std;

class Vehicle {
public:
    void showVehicle()
    {
        cout << "Vehicle\n";
    }
};

class Car : public Vehicle {
public:
    void showCar()
    {
        cout << "Car\n";
    }
};

class ElectricCar : public Car {
    int battery;
public:
    ElectricCar(int b)
    {
        battery = b;
    }
    void display() 
    {
        showVehicle();
        showCar();
        cout << "Battery: " << battery << endl;
    }
};

int main() 
{
    ElectricCar e(75);
    e.display();
}
