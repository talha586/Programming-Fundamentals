#include <iostream>
using namespace std;
int main()
{
	float sl, year1, year2, rise;
	cout << "Enter the current sea level in feet=";
	cin >> sl;
	cout << endl;
	year1 = sl*(1.5 / 100) + sl;
	year2 = year1*(1.5 / 100) + year1;
	cout << "Rise in sea level after 2 years=" << year2;
	cout << endl;
	rise = year2 - sl;
	cout << "rise in sea level="<<rise;
	cout << endl;
	system("pause");
	return 0;

}