//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[100][100];
//	int r, c, i = 0, j = 0, top_row = 0,down_row=0,right_column=0,left_column=0;
//	cout << "Enter no of rows=";
//	cin >> r;
//	cout << "Enter number of columns=";
//	cin >> c;
//
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << "Enter number=";
//			cin >> arr[i][j];
//			if (i == 0)
//			{
//				top_row = top_row + arr[i][j];
//			}
//			if (i == r - 1)
//			{
//				down_row = down_row + arr[i][j];
//			}
//			if (j == 0)
//			{
//				right_column = right_column+ arr[i][j];
//			}
//			if (j == c-1)
//			{
//				left_column = left_column + arr[i][j];
//			}
//		}
//	}
//	int total_sum = top_row + down_row + right_column + left_column-arr[0][0]-arr[0][c-1]-arr[r-1][0]-arr[r-1][c-1];
//		cout << "Total sum="<<total_sum;
//}