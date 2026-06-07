//#include<iostream>
//using namespace std;
//int main()
//{
//	int u_size;
//	int const size = 100;
//	int price[size] = {};
//	int max_profit=0,diff=0;
//    cout << "Enter the size of array=";
//	cin >> u_size;
//
//	for (int i = 1;i <= u_size;i++)
//	{
//		cout << "Enter price of stock on " << i << " day=";
//		cin >> price[i];
//	} 
//	for (int i = 1;i < u_size;i++)
//	{
//		for (int j = i + 1;j <= u_size;j++)
//		{
//			diff = price[j] - price[i];
//			if (diff > max_profit)
//			{
//				max_profit = diff;
//			}
//		}
//	}
//	cout << "Maximum profit=" << max_profit;
//	system("pause>0");
//}