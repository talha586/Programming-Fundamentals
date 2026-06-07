#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c, p1, p2;
	cout << "enter the value of a=";
	cin >> a;
	cout << "enter the value of b=";
	cin >> b;
	cout << "enter the value of c=";
	cin >> c;
	p1 = ( pow(a, 2) + pow(c, 2) - pow(b, 2) ) / (2*a*c);
	p2 = acos(p1);
	cout << "the angle is=" << p2<<endl;
	system("pause");
	return 0;
}