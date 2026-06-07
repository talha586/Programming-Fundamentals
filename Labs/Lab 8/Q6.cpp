//#include<iostream>
//using namespace std;
//int main()
//{
//	int const row = 100, cols = 100;
//	int arr1[row][cols] = {};
//	int u_row, u_cols;
//
//	cout << "Enter number of rows=";
//	cin >> u_row;
//	cout << "Enter number of columns=";
//	cin >> u_cols;
//	for (int i = 1; i <= u_row; i++)
//	{
//		for (int j = 1; j <= u_cols; j++)
//		{
//			cin >> arr1[i][j];
//		}
//	}
//	int max;
//	int i = 1; int j = 1;
//	for (int c = 1; c <= u_cols && i<=u_cols; c++)
//	{
//		max = arr1[j][i];
//		for (int r=1;r<=u_row;r++)
//		{
//			if (arr1[r][c] > max)
//			{
//				max = arr1[r][c];
//			}
//		}
//		cout << "Max value in column" << c << "=" << max << endl;
//		i++;
//	}
//}