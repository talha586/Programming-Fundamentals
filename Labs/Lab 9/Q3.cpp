//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr1[100][100], arr2[100][100],sum=0;
//	int row1, cols1, cols2, row2;
//	cout << "Enter the number of rows array 1=";
//	cin >> row1;
//	cout << "Enter the number of columns of array 1=";
//	cin >> cols1;
//	cout << "Enter the number of rows array 2=";
//	cin >> row2;
//	cout << "Enter the number of columns of array 2=";
//	cin >> cols2;
//
//	while (row1 < 0 || cols1 < 0 || row2 < 0 || cols2 < 0)
//	{
//		if (row1 < 0)
//		{
//			cout << "Enter valid data for row 1=";
//			cin >> row1;
//		}
//		if (row2 < 0)
//		{
//			cout << "Enter valid data for row 2=";
//			cin >> row2;
//		}
//		if (cols1 < 0)
//		{
//			cout << "Enter valid data for column 1=";
//			cin >> cols1;
//		}
//		if (cols2 < 0)
//		{
//			cout << "Enter valid data for column 2=";
//			cin >> cols2;
//		}
//	}
//
//	for (int i = 0; i < row1; i++)
//	{
//		for (int j = 0; j < cols1; j++)
//		{
//			cout << "Enter number=";
//			cin >> arr1[i][j];
//		}
//	}
//	for (int i = 0; i < row2; i++)
//	{
//		for (int j = 0; j < cols2; j++)
//		{
//			cout << "Enter number=";
//			cin >> arr2[i][j];
//		}
//	}
//	int row=row1;
//	int cols=cols2;
//	int k = 0;
//
//	for (int i = 0;i < row1;i++)
//	{
//		cout << endl;
//		for (int j = 0;j < cols2;j++)
//		{
//			for (int k = 0;k < row2;k++)
//			{
//				sum = sum + arr1[i][k] * arr2[k][j];
//				if (k == row2 - 1)
//				{
//					cout << sum<<" ";
//				}
//			}
//			sum = 0;
//		}
//	}
//}