//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[100][100];
//	int r, c,row_sum=0,col_sum=0;
//	cout << "Enter number of rows=";
//	cin >> r;
//	cout << "Enter number of columns=";
//	cin >> c;
//	
//
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << "Enter number=";
//			cin >> arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			row_sum = row_sum + arr[i][j];
//		}
//	}
//	for (int j = 0; j < c; j++)
//	{
//		for (int i = 0; i < r; i++)
//		{
//			col_sum = col_sum + arr[i][j];
//		}
//	}
//	cout << "Row sum=" << row_sum << endl;
//	cout << "Column sum=" << col_sum<<endl;
//	if (row_sum == col_sum)
//	{
//		cout << "All the rows and columns are equal";
//	}
//
//
//
//}