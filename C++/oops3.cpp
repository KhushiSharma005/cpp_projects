#include <iostream>
using namespace std;

class Number 
{
private:
    int num;

public:
    void setData()
    {
        cin >> num;
    }
    int isEven()
    {
        if (num % 2 == 0)
            return 1;
        else
            return 0;
    }
    int isPrime() 
    {
        if (num < 2)
            return 0;

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
                return 0;
        }
        return 1;
    }
};

int main()
{
    Number n;
    cout << "Enter number: ";
    n.setData();

    cout << "Even? " << (n.isEven() ? "Yes" : "No") << endl;
    cout << "Prime? " << (n.isPrime() ? "Yes" : "No") << endl;

    return 0;
}