#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int choice, base, tripfare = 0, j_time, w_time, distance, min_charge, km_charge, discount, surcharge,penalty,surgeamount,promocodeprice;
	char promocode, surge;
	string v_type;
	cout << "Enter 1 for car=";
	cin >> choice;
	if (choice == 1) {
		v_type = "car";
	}
	cout << "Enter 2 for auto=";
	cin >> choice;
	if (choice == 2) {
		v_type = "auto";
	}
	cout << "Enter 3 for bike=";
	cin >> choice;
	if (choice == 3) {
		v_type = "bike";
	}
	cout << "Enter base fair=";
	cin >> base;
	cout << "Enter waiting time= ";
	cin >> w_time;
	cout << "Enter journey time= ";
	cin >> j_time;
	cout << "total distance= ";
	cin >> distance;
	cout << "Per minute travel charges ";
	cin >> min_charge;
	cout << "Per kilometer travel charges=";
	cin >> km_charge;
	cout << "Enter y for promo code ";
	cin >> promocode;
	if (promocode == 'y') {
		cout << "Enter discount in decimals= ";
		cin >> discount;
	}
	cout << "Enter y for peak timing= ";
	cin >> surge;
	if (surge == 'y') {
		cout << "Enter surcharge rate in decimals= ";
		cin >> surcharge;
	}
	tripfare = base + (min_charge * j_time) + (km_charge * distance);
	if (w_time > 3)
	{
		tripfare = tripfare + 50;
	}
	if (promocode == 'y')
	{
		tripfare = tripfare * discount + tripfare;
}
	if (surge == 'y')
	{
		tripfare = tripfare + surcharge * tripfare;
	}

	if (choice == 1)
	{
		tripfare = tripfare * 3;
	}
	else if (choice == 2)
	{
		tripfare = tripfare * 2;
	}
	else if (choice == 3)
	{
		tripfare = tripfare * 1;
	}
	if (w_time > 3)
	{
		penalty = 50;
		cout << "Penalty is" << penalty<<endl;
	}
	if (surge == 'y') {
		surgeamount = surcharge * tripfare;
		cout << "The surgeamount" << surgeamount << endl;
	}
	if (promocode == 'y') {
		promocodeprice = discount * tripfare;
		cout << "The discounted price" << promocodeprice;
	}
	cout << "Your ride " << v_type << endl;
	cout << "Base charges" << base << endl;
	cout << "Journey charges " << min_charge*j_time<< endl;
	cout << "Distance charges " << km_charge * distance << endl;
	cout << "trip fare " << tripfare << endl;
	cout << "Driver pay " << tripfare * 0.7 << endl;
	cout << "Company pay " << tripfare * 0.2 << endl;
	cout << "Tax " << tripfare * 0.1 << endl;


	system("pause>0");
}