//#include<iostream>
//using namespace std;
//int getinput(int& num)
//{
//	cout << "Enter number=";
//	cin >> num;
//	while (num < 0)
//	{
//		cout << "Enter valid data=";
//		cin >> num;
//	}
//	return num;
//}
//int isprime(int& num,bool&found)
//{
//	for (int i = 2; i <= num / 2; i++)
//	{
//		if (num % i == 0)
//		{
//			found = true;
//		}
//	}
//	return found;
//}
//int factorial(int& product,int& num)
//{
//	for (int i = 1; i <=num; i++)
//	{
//		product = product * i;
//	}
//	return product;
//}
//
//int main()
//{
//	int num,product=1;
//	bool found=false;
//	getinput(num);
//	isprime(num,found);
//	factorial(product,num);
//	if (found == false)
//	{
//		cout << "the factorial of " << num << " is" << product;
//	}
//	else if(found==true)
//	{
//		cout << "invalid input";
//	}
//}