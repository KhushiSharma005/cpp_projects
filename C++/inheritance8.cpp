#include <iostream>
using namespace std;

class Device {
public:
    virtual void info() {
        cout << "Generic Device" << endl;
    }
};

class Mobile : public Device {
    string OS;
    int RAM;
public:
    Mobile(string o, int r) : OS(o), RAM(r) {}

    void info() override {
        Device::info();
        cout << OS << "  " << RAM << endl;
    }
};

int main() {
    string OS;
    int RAM;

    cin >> OS >> RAM;

    Mobile m(OS, RAM);
    m.info();

    return 0;
}