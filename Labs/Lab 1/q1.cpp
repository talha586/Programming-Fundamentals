#include <iostream>
using namespace std;
int main()
{
	float price, radius, result,area;
	cout << "Enter the radius of pizza in inches=" ;
	cin >> radius;
	cout << "Enter the price of pizza=Rs." ;
	cin >> price;
	area = 3.14*pow(radius, 2);
	result = price / area;
	cout << "Price of square inch of pizza" << result <<endl;
	system("pause");
	return 0;
}