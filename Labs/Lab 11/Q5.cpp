#include<iostream>
using namespace std;
float principal, rate, years;
float getloandetsils(float& principal,float& rate,float& years)
{
	cout << "Enter loan principal amount=";
	cin >> principal;
	cout << "Enter interest rate=";
	cin >> rate;
	cout << "Enter number of years=";
	cin >> years;
}
float monthlypayment(float& principal, float& rate, float& years,float payment)
{
	payment = (principal * (rate / 12)) / 1 - pow((1 + rate / 12), 12 * -years));

}
int main()
{
	int payment;
	getloandetsils(principal, rate, years);
	monthlypayment( principal,  rate,years,payment);

	cout << "Monthly payment=" << payment;
}