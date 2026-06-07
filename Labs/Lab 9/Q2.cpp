
//#include<iostream>
//using namespace std;
//int main()
//{
//
//	int arr[100][100],tr[100][100],rev[100][100];
//	int row,cols;
//
//	cout << "Enter the number of rows(N*N)= ";
//	cin >> row;
//	cout << "Enter number of columns=";
//	cin >> cols;
//	while (cols < 0 || row < 0 || row != cols)
//	{
//		if (cols < 0)
//		{
//			cout << "Enter valid data=";
//			cin >> cols;
//		}
//		if (row < 0)
//		{
//			cout << "Enter valid data=";
//			cin >> row;
//		}
//	}
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << "Enter number=";
//			cin >> arr[i][j];
//		}
//	}
//	for (int j = 0; j < cols; j++)
//	{
//		for (int i = 0; i < row; i++)
//		{
//			tr[j][i] = arr[i][j];
//		}
//	}
//	cout << "Transpose of matrix:";
//	for (int j = 0; j < cols; j++)
//	{
//		cout << endl;
//		for (int i = 0; i < row; i++)
//		{
//
//			cout<<tr[j][i]<<" ";
//		}
//	}
//	cout << endl;
//	cout << "Reverse of matrix:";
//	for (int j = 0; j <row; j++)
//	{
//		cout << endl;
//		for (int i = cols-1; i >= 0; i--)
//		{
//			cout << tr[j][i]<<" ";
//		}
//	}
//
//
//}