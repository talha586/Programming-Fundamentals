//#include<iostream>
//using namespace std;
//float taxPercentage = 0.15;
//float tax;
//float CalculateTax(float& monthlySalary)
//{
//	cout << "Enter monthly salary=";
//	cin >> monthlySalary;
//	tax = taxPercentage * monthlySalary*12;
//	return tax;
//}
//float CalculateTax(float& revenue, float& expenses)
//{
//	float profit;
//	cout << "Enter total revenue=";
//	cin >> revenue;
//	cout << "Enter expense=";
//	cin >> expenses;
//	profit = revenue - expenses;
//	tax = taxPercentage * profit;
//	return tax;
//}
//float CalculateTax(float& earnings, int& dependents)
//{
//	float tax_1;
//	cout << "Enter earnings=";
//	cin >> earnings;
//	cout << "Enter number of dependents=";
//	cin >> dependents;
//
//	if (dependents > 5)
//	{
//		tax_1 = 0.05;
//	}
//	else
//	{
//		tax_1 = taxPercentage - dependents * 0.02;
//	}
//	tax = tax_1 * earnings;
//	return tax;
//}
//int main()
//{
//	int dependents;
//	float earnings, expenses, revenue, monthlySalary;
//	int num;
//	cout << "1 For salaried individuals\n2 For business owners\n3 For freelancers:";
//	cin >> num;
//	if (num == 1)
//	{
//	  CalculateTax( monthlySalary);
//	  cout<< "Tax="<<tax;
//	  
//	}
//	if (num == 2)
//	{
//		
//		CalculateTax( revenue, expenses);
//		cout << "Tax="<<tax;
//	}
//	if (num == 3)
//	{
//		 CalculateTax( earnings,  dependents);
//		 cout << "Tax=" << tax;
//	}
//
//}