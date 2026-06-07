#include <iostream>
using namespace std;
int main()
{
	float mi, r, g, u, t, e, oe,result;
	cout << "enter monthly income=";
	cin >> mi;
	cout << endl;
	cout << "enter rent expense=";
	cin >> r;
	cout << endl;
	cout << "enter grocery expense=";
	cin >> g;
	cout << endl;
	cout << "enter utility expense=";
	cin >> u;
	cout << endl;
	cout << "enter transport expense=";
	cin >> t;
	cout << endl;
	cout<<"entertainment expense=";
	cin >> e;
	cout << endl;
	cout << "other expense=";
	cin >> oe;
	cout << endl;
	result = r + g + u + t + e + oe;
	cout << "total expense=" << result;
	cout << endl;
	cout << "remaining balance=" << mi - result;
	cout <<"Rent percent="<< (r / mi) * 100;
	cout << endl;
	cout <<"Grocery percent="<< (g / mi) * 100;
	cout << endl;
	cout <<"utility percent="<< (u / mi) * 100;
	cout << endl;
	cout <<"transport percent="<< (t / mi) * 100;
	cout << endl;
	cout <<"entertainment percent="<< (e / mi) * 100;
	cout << endl;
	cout << "other expense percent=" << (oe / mi) * 100;
	system("pause");
	return 0;

}