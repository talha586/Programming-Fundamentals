#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number, sum = 0, a = 0;
	cout << "Enter a number";
	cin >> number;
	int b = number;
	while (b) {
		b = b / 10;
		a++;
	}
	while (b) {
		sum = sum + pow(b % 10, a);
		b = b / 10;
	}
	if (sum == number) {
		cout << "This is armstrong number" << endl;
	}
	else {
		cout << "This is not an amstrong number" << endl;
	}
	system("pause>0");
}
