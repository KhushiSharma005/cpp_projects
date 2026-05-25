#include <iostream>
using namespace std;
class Book 
{
    string title;
    float price;
public:
    Book(string t, float p)
    {
        title = t;
        price = p;
    }

    Book(Book &b) 
    {         
        title = b.title;
        price = b.price;
    }

    void display() 
    {
        cout << title << " - Rs." << price << endl;
    }
};

int main() {
    Book b1("Mathematics", 500);
    Book b2 = b1;

    b1.display();
    b2.display();
    return 0;
}