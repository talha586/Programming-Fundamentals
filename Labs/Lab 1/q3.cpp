#include<iostream>
using namespace std;
int main()
{
	float oprice, mprice, dprice;
	cout << "What is the original price of the item=Rs.";
	cin >> oprice;
	float x = 0.8, y = 0.1;
	mprice = oprice + x*oprice;
	dprice = mprice - mprice * y;
	cout << "The new price of the item is=Rs." << dprice;
	system("pause");
	return 0;
}