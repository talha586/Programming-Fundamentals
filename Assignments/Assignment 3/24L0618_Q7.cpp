//#include<iostream>
//using namespace std;
//int main()
//{
//	int const size1=100,size2=100;
//	int arr[size1] = {};
//	int filter[size2] = {};
//	int res[size1] = {};
//	int sum = 0,u_size,filter_size;
//	cout << "Enter the size of array=";
//	cin >> u_size;
//	filter_size = u_size / 2;
//	for (int i = 0;i < u_size;i++)
//	{
//		cout << "Enter number for array=";
//		cin >> arr[i];
//	}
//	for (int i = 0;i < filter_size;i++)
//	{
//		cout << "Enter number for filter=";
//		cin >> filter[i];
//	}
//	int k = 1;
//	for (int i = 1;i < u_size - 1;i++)
//	{
//		sum = 0;
//		for (int j = 0;j < filter_size;j++)
//		{
//			sum = sum + filter[j] * arr[i + j - 1];
//		}
//		res[k] = sum;
//		k++;
//	}
//	res[0] = filter[1] * arr[0] + filter[2]*arr[1];
//	res[u_size - 1] = filter[0] * arr[u_size - 2] + filter[1]*arr[u_size-1];
//	for (int i = 0;i < u_size;i++)
//	{
//		cout << res[i]<<" ";
//	}
//
//
//
//}