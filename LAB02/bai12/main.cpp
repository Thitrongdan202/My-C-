#include <iostream>

using namespace std;

int main()
{
    int month, year, days;

    cout << "Nhap thang va nam: ";
    cin >> month >> year;

    bool leapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    switch (month) {
        {
            case 1:
            days = 31;
            break;
        }
        {
            case 2:
            days = (leapYear) ? 29 : 28;
            break;
        }
        {
            case 3:
            days = 31;
            break;
        }
        {
            case 4:
            days = 30;
            break;
        }
        {
            case 5:
            days = 31;
            break;
        }
        {
             case 6:
            days = 30;
            break;
        }
       {
             case 7:
            days = 31;
            break;
       }
      {
          case 8:
            days = 31;
            break;
      }
       {
            case 9:
            days = 30;
            break;
       }
       {
            case 10:
            days = 31;
            break;
       }
       {
           case 11:
            days = 30;
            break;
       }
        {
             case 12:
            days = 31;
            break;
        }
       {
           default:
            cout << "Thang khong hop le.";
            return 0;
       }

    }

    cout << "Thang " << month << "/" << year << " co " << days << " ngay.";
    return 0;
}
