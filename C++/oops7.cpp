#include<iostream>
using namespace std;
class book
{
private:
    string title;
    string author;
    float price;
public:    
    void input()
    {
        cout<<"\nEnter Title : ";
        cin>>title;
        cout<<"\nEnter Name of Author : ";
        cin>>author;
        cout<<"Enter Price : ";
        cin>>price;
    }
    void discount(float percent)
    {
        price = price-(price*(percent/100));
    }
    void show()
    {
        cout<<"\nTitle : "<<title<<endl;
        cout<<"\nAuthor : "<<author<<endl;
        cout<<"\nFinal Price : "<<price<<endl;
    }
};
int main()
{
    book b;
    b.input();
    b.discount(10);
    b.show();
    return 0;
}


