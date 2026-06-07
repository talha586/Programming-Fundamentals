#include<iostream>
using namespace std;
int main()
{
	int deposit,balance,withdraw;
	char a;
	cout << "Enter 1 for deposit ,2 for withdraw,-1 for quit";
	cin >> a;
	
	if (a == '1')
	{
		cout << "Enter amount=";
		cin >> deposit;
		cout << "deposited = " <<deposit<< endl;
		cout <<"balance = " <<deposit << endl;
		
		cout << "Choose an option 2 for withdraw -1 for quit";
		cin >> a;
		if (a == '2')
		{
			cout << "Enter amount=";
			cin >> withdraw;
			cout << "withdraw " << withdraw << endl;
			balance = deposit - withdraw;
			cout << "balance = " << balance << endl;

			cout << "Choose -1 for quit";
			cin >> a;

			if (a == '-1')
			{
				cout << "Balance=" << balance;
			}
			else if (a != -1)
			{
				cout << "Enter valid data";
			}
		}
		else if (a != 2)
		{
			cout << "Enter valid data";
		}
	}
	else if (a != 1)
	{
		cout << "Enter valid data";
	}




}