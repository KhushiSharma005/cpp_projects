#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter any number :";
    cin>>n;
    if (n<1||n>99)
    {
     cout<<"\nError";
    }
    else
    {
    if (n<20)
    {
     switch (n)
    {
     case 1:
     cout<<"\nOne";
     break;
     case 2:
     cout<<"\nTwo";
     break;
     case 3:
     cout<<"\nThree";
     break;
     case 4:
     cout<<"\nFour";
     break;
     case 5:
     cout<<"\nFive";
     break;
     case 6:
     cout<<"\nSix";
     break;
     case 7:
      cout<<"\nSeven";
     break;
     case 8:
     cout<<"\nEight";
     break;
     case 9:
     cout<<"\nNine";
     break;
     case 10:
     cout<<"\nTen";
     break;
      case 11:
        cout<<"\nEleven";
      break;
      case 12:
        cout<<"\nTwelve";
      break;
      case 13:
        cout<<"\nThirteen";
      break;
      case 14:
        cout<<"\nFourteen";
      break;
      case 15:
        cout<<"\nFifteen";
      break;
      case 16:
        cout<<"\nSixteen";
      break;
      case 17:
        cout<<"\nSeventeen";
      break;
      case 18:
        cout<<"\nEighteen";
      break;
      case 19:
        cout<<"\nNineteen";
      break;
      case 20:
        cout<<"\nTwenty";
      break;
    }
}
    if (n>20)
    {
    switch (n/10)
    {
    case 2:
        cout<<"\nTwenty";
        break;
    case 3:
        cout<<"\nThirty";
        break;
    case 4:
        cout<<"\nFourty";
        break;
    case 5:
        cout<<"\nFifty";
        break;
    case 6:
        cout<<"\nSixty";
        break;
    case 7:
        cout<<"\nSeventy";
        break;
    case 8:
        cout<<"\nEighty";
        break;
    case 9:
        cout<<"\nNinty";
        break;
    }
    switch (n%10)
    {
    case 1:
        cout<<" one";
        break;
    case 2:
        cout<<" Two";
        break;
    case 3:
        cout<<" Three";
        break;
    case 4:
        cout<<" Four";
        break;
    case 5:
        cout<<" Five";
        break;
    case 6:
        cout<<" Six";
        break;
    case 7:
        cout<<" Seven";
        break;
    case 8:
        cout<<" Eight";
        break;
    case 9:
        cout<<" Nine";                        
    }
}
    }
    return 0;
}