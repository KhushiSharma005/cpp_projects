#include <iostream>
using namespace std;
class time
{
private:
 int hour;
 int minute;
 int second;
 public:
 void input()
 {
    cin>> hour >> minute >> second;
 }
 void normalize()
 {
    minute=minute+(second/60);
    second=second%60;
    hour=hour+(minute/60);
    minute=minute%60;
 }
 void display()
 {
    cout<<""
 }
};
