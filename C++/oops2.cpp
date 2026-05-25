#include<iostream>
using namespace std;
class rectangle
{
private:
    float length,breadth;
public:
    void getdata()
    {
        cin>>length>>breadth;
    }    
    float area()
    {
        return (length*breadth);
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
};
  int main()
  {
    rectangle r;
    cout<<"Enter length and breadth of rectangle : ";
    r.getdata();
    cout<<"\nArea of rectangle : "<<r.area()<<endl;
    cout<<"\nPerimeter of rectangle : "<<r.perimeter();
    return 0;
  }


