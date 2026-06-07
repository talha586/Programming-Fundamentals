#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num, product = 1, counter = 1, again;
	cout << "Enter number";
	cin >> num;
	while (counter <= num) {
		product = product * counter;
		counter++;
	}
	cout << "factorial is=" << product << endl;
	cout << "Do you want to take another factorial" << endl;
	cin >> again;
	if (again == 1) {
		cout << "Enter number";
		cin >> num;
		while (counter <= num) {
			product = product * counter;
			counter++;
		}
		cout << "factorial is" << product << endl;
		cout << "Another factorial";
		cin >> again;
	}while (again != 0)
	{
		return 0;
	}
	system("pause>0");
}
