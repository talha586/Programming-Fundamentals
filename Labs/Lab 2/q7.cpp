#include<iostream>
using namespace std;
int main()
{
	int x1, x2, x3, x4, x5, x6, x7, x8, x9;
	cout << "Enter the x1=";
	cin >> x1;
	cout << endl;
	cout << "Enter the x2=";
	cin >> x2;
	cout << endl;
	cout << "Enter the x3=";
	cin >> x3;
	cout << endl;
	cout << "Enter the x4=";
	cin >> x4;
	cout << endl;
	cout << "Enter the x5=";
	cin >> x5;
	cout << endl;
	cout << "Enter the x6=";
	cin >> x6;
	cout << endl;
	cout << "Enter the x7=";
	cin >> x7;
	cout << endl;
	cout << "Enter the x8=";
	cin >> x8;
	cout << endl;
	cout << "Enter the x9=";
	cin >> x9;
	cout << endl;
	if (x1 == 0 && x2 == 0 && x3==0)
	{
		cout << "the playe one won";
	}
	else if (x4 == 0 && x5 == 0 && x6 == 0)
	{
		cout << "the playe one won";
	}
	else if (x7 == 0 && x8 == 0 && x9 == 0)
	{
		cout << "the playe one won";
	}
	else if (x1 == 1 && x2 == 1 && x3 == 1)
	{
		cout << "the playe two won";
	}
	else if (x4 == 1 && x5 == 1 && x6 == 1)
	{
		cout << "the playe two won";
	}
	else if (x7 == 1 && x8 == 1 && x9 == 1)
	{
		cout << "the playe two won";
	}
	else if (x1 == 0 && x5 == 0 && x9 == 0)
	{
		cout << "the playe one won";
	}
	else if (x3 == 0 && x5 == 0 && x7 == 0)
	{
		cout << "the playe one won";
	}
	else if (x1 == 0 && x5 == 0 && x9 == 0)
	{
		cout << "the playe one won";
	}
	else if (x3 == 0 && x5 == 0 && x7 == 0)
	{
		cout << "the playe one won";
	}
	else if (x1 == 1 && x5 == 1 && x9 == 1)
	{
		cout << "the playe two won";
	}
	else if (x3 == 1 && x5 == 1 && x7 == 1)
	{
		cout << "the playe two won";
	}
	else {
		cout << "no one won";
	}
	system("pause>0");
}