

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int upper, p;
	cout << "Enter the upper limit for numbers: ";
	cin >> upper;


	for (int i = 100; i <= upper; i++)
	{
		int sum = 0;
		int temp = i;
		int digits = 0;

		while (temp > 0)
		{
			temp /= 10;
			digits++;
		}
		temp = i;
		while (temp > 0)
		{
			int digit = temp % 10;
			sum += pow(digit, digits);
			temp /= 10;
		}
		if (sum == i)
			cout << i << " ";
	}
	return 0;
}