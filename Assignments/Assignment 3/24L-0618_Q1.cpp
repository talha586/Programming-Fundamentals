//#include<iostream>
//using namespace std;
//int main()
//{
//	int const size = 9;
//	int arr[size] = {};
//	int num,sum1=0,sum2=0,u_size;
//	cout << "Enter the size of array=";
//	cin >> u_size;
//	for (int i = 0;i < u_size;i++)
//	{
//		cout << "Enter number=";
//		cin >> arr[i];
//	}
//	do
//	{
//		cout << "Enter index=";
//		cin >> num;
//	} while (num!=0 && num>=u_size);
//	for (int i = 0;i < num;i++)
//	{
//		sum1 = sum1 + arr[i];
//	}
//	for (int i = num+1;i < u_size;i++)
//	{
//		sum2 = sum2 + arr[i];
//	}
//	if (sum1 == sum2)
//	{
//		cout << "Equilibrium index=" << num;
//		cout << endl;
//	}
//	else {
//		cout << "Equilibrium index=-1";
//		cout << endl;
//	}
// system("pause>0");
//
//}