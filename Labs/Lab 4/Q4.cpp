#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number=";
	cin >> num;
	while (num > 0)
	{
		if (num % 2 != 0) {
			while (num % 2 != 0)
			{
				cout << "The number is prime" << endl;
				break;
			}
		}
		else if (num < 0) {
			cout << "Enter valid data"<<endl;
		}
		else
			cout << "The number is not prime"<<endl;
		cout << "Enter a number=";
		cin >> num;
	}
}