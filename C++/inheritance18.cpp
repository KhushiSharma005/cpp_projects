#include <iostream>
using namespace std;

class User {
public:
    virtual float discount(float amt){
        return amt;
    }
};

class Customer : public User {
public:
    float discount(float amt){
        return amt*0.9;
    }
};

class PremiumCustomer : public Customer {
public:
    float discount(float amt){
        return amt*0.8;
    }
};

int main(){
    float amt; cin>>amt;
    PremiumCustomer p;
    cout<<p.discount(amt);
}