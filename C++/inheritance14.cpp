#include <iostream>
using namespace std;

class Printer {
public:
    void show() {
        cout << "Printer\n";
    }
};

class Scanner {
public:
    void show() {
        cout << "Scanner\n";
    }
};

class allinone : public Printer, public Scanner {
public:
    void display() {
        Printer::show();
        Scanner::show();
    }
};

int main() {
    allinone a;
    a.display();
}
