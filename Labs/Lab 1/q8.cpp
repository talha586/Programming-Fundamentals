#include <iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "Enter the value of x=";
	cin >> x;
	cout << endl;
	cout << "Enter the value of y=";
	cin >> y;
	cout << endl;
	x = x + y;
	y = x - y;
	x = x - y;
	cout << "x=" << x << "" << "y=" << y;
	cout << endl;
	system("pause");
	return 0;
}
