#include <iostream>
using namespace std;

class Car 
{
private:
    string brand, model;
    float mileage;
    float fuel;

public:
    void input() 
    {
        cout << "Brand: ";
        cin >> brand;
        cout << "Model: ";
        cin >> model;
        cout << "Fuel in liters: ";
        cin >> fuel;
        mileage = 20;  // given
    }

    void drive(float km)
    {
        float fuelUsed = km / mileage;
        if(fuelUsed <= fuel)
            fuel -= fuelUsed;
        else
            cout << "Not enough fuel!\n";
    }

    void showStatus()
    {
        cout << "\nBrand: " << brand;
        cout << "\nModel: " << model;
        cout << "\nRemaining Fuel: " << fuel << " L \n";
    }
};

int main() {
    Car c;
    c.input();
    c.drive(100); 
    c.showStatus();
}