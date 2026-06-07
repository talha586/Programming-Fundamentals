//#include<iostream>
//using namespace std;
//int main()
//{
//	int const size = 9;
//	int arr[size] = {};
//	int sum = 0,max_sum=0,a,b;
//	int u_size;
//
//	cout << "Enter the size of array=";
//	cin >> u_size;
//	for (int i = 0;i < u_size;i++)
//	{
//		cout << "Enter a number=";
//		cin >> arr[i];
//	}
//	for (int first = 0;first < u_size;first++)
//	{
//		sum = 0;
//		for (int last = first;last < u_size;last++)
//		{
//			sum = sum + arr[last];
//			if (sum > max_sum)
//			{
//				a = first;
//				b = last;
//				max_sum = sum;
//			}
//		}
//	}
//	cout << "Max sub array sum is=";
//	for (int i = a;i <= b;i++)
//	{
//		cout<< arr[i]<<" ";
//	}
//	cout << "Whose sum=" << max_sum;
//}