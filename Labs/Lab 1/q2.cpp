#include <iostream>
using namespace std;
int main()
{
	float h, w, g;
	cout << "Enter the height of wall=";
	cin >> h;
	cout << "Enter the width of wall=";
	cin >> w;
	cout << "Enter the gallon covers per area=";
	cin >> g;
	cout << "Numbers of gallons required=" << (h*w) / (g);
	cout << endl;
	system("pause");
	return 0;
}