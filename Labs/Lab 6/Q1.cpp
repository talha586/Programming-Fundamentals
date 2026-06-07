//#include<iostream>
//using namespace std;
//int main()
//{
//
//	int const size = 7;
//	int arr[size] = {};
//	bool unique;
//	int counter = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter number=";
//		cin >> arr[i];
//	}
//	for (int j = 0; j < size; j++)
//	{
//		unique = false;
//		for (int k = 0; k < size; k++)
//		{
//
//			if (arr[j] == arr[k])
//			{
//				unique = true;
//			}
//			else if (j==k)
//			{ }
//		}
//		if (unique==false)
//		{
//			counter++;
//			cout << arr[j];
//		}
//	}
//	if (counter == 0)
//	{
//		cout << "No distinct element";
//	}
//
//}