#include<iostream>
using namespace std;
int totaltickets = 100;
void BookTickets(int& Id, int& numTickets, int& price)
{
	cout << "Enter customer id=";
	cin >> Id;
	cout << "Enter number of tickets books=";
	cin >> numTickets;
	while (numTickets > 5 || numTickets<0)
	{
		cout << "Enter valid number of tickets=";
		cin >> numTickets;
	}
}
void display(int& numTickets,int&price,int&Id)
{
	char again;
	totaltickets = totaltickets - numTickets;
	price = 10;
	price = numTickets * price;
	cout << "Remaining tickets=" << totaltickets<<endl;
	cout << "Price=" << price<<endl;
	cout << "Do ypu want to again calculate?(y for yes)";
	cin >> again;
	while (again == 'y')
	{
		BookTickets(Id, numTickets, price);
		display(numTickets, price, Id);
		cout << "Do ypu want to again calculate?(y for yes)";
		cin >> again;
		if (again != 'y')
			system("pause>0");
	}
}


int main()
{
	int numTickets, Id,price=10;
   BookTickets(Id, numTickets,price);
   display(numTickets,price,Id);


}

//cout << "Enter customer id=";
//cin >> Id;
//if (Id == -1)
//system("pause>0");
//cout << "Enter number of tickets booked=";
//cin >> numTickets;
//while (numTickets <= 5 && numTickets >= 0)
//{
//	totaltickets = totaltickets - numTickets;
//	price = price * numTickets;
//	cout << "Booking cost=" << price << endl;
//	cout << "Remaining tickets=" << totaltickets;
//	price = 10;
//	break;
//}
//while (Id != -1)


//
//{
//	if (Id == -1)
//		;
//	cout << "Enter number of tickets booked=";
//	cin >> numTickets;
//	while (numTickets <= 5 && numTickets >= 0)
//	{
//		totaltickets = totaltickets - numTickets;
//		price = price * numTickets;
//		cout << "Booking cost=" << price << endl;
//		cout << "Remaining tickets=" << totaltickets;
//		price = 10;
//		break;
//	}
//	cout << "Enter customer id(-1 for exit)=";
//	cin >> Id;
//}