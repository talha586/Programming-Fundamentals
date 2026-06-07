//#include<iostream>
//using namespace std;
//int main()
//{
//	int const size = 18;
//	int arr[size] = {};
//	int targetval,max_count=0;
//	int running_count = 0,first,second,a,u_size;
//	cout << "Enter the size of array=";
//	cin >> u_size;
//	for (int i = 0;i < u_size;i++)
//	{
//		cout << "Enter number=";
//		cin >> arr[i];
//	}
//	cout << "Enter target value whose value you want to delete=";
//	cin >> targetval;
//	for (int i = 0;i < u_size;i++)
//	{
//		if (arr[i] == targetval)
//		{
//			running_count++;
//			if (arr[i + 1] != targetval)
//			{
//				first = i-running_count+1;
//				second = i;
//			}
//		}
//		else if (arr[i] != targetval)
//		{
//			max_count = running_count;
//			running_count = 0;
//
//		}
//	}
//	for (int i = first;i <= second;i++)
//	{
//		arr[i] = -1;
//	}
//	for (int i = 0;i < u_size;i++)
//	{
//		cout << arr[i] << " ";
//	}
//}