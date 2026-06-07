#include <iostream>
using namespace std;
int main()
{
	float x, y, t;
	cout << "enter the value of x=";
	cin >> x;
	cout << endl;
	cout << "enter the value of y=";
	cin >> y;
	cout << endl;
	t = x;
	x = y;
	y = t;
	cout << "x=" << x << "" << "y=" << t;
	cout << endl;
	system("pause");
	return 0;
	 
}