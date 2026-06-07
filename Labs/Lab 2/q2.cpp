#include <iostream>
using namespace std;
int main()
{
	int a, b;
	bool c,d, conclusion;
	cout << "What is the first value=";
	cin >> a;
	cout << endl;
	cout << "What is the second value";
	cin >> b;
	cout << endl;
	c = (a != 0);
	d = (b != 0);
	conclusion = c ^ d;
	cout << "the output is" << conclusion << endl;
	system("pause>0");

}