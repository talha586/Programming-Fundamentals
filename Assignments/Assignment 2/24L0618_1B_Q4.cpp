#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int date, month, year, t,x,y;
    cout << "Enter the date=";
    cin >> date;
    cout << "Enter the month=";
    cin >> month;
    cout << "Enter the year=";
    cin >> year;
    if (date <= 0 || month <= 0 || year <= 0 || month > 12)
    {
        cout << "You have entered invalid input";
        system("pause>0");

        if (month == 2 && date > 29)
        {
            cout << "You have enterd invalid input";
            system("pause>0");
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11 && date > 30)
        {
            cout << "You have entered invalid input";
            system("pause>0");
        }
        else if (month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 && date > 31)
        {
            cout << "You have enterd invalid input.";
            system("pause>0");
        }
        else if (year < 1000 && year>9999)
        {
            cout << "You have entered invalid input";
        }
    }
    t = date * month;
    x = year % 100;
    if (t == x) {
        cout << "It is a magical date.";
    }
    else {
        cout << "It is not a magical date.";
    }
    system("pause>0");

}