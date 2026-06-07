//#include<iostream>
//using namespace std;
//int main()
//{
//	int const row = 100, cols = 100;
//	int arr1[row][cols] = {};
//	int u_row, u_cols,s_main=0,s_anti=0;
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
//	int i = 1;
//	int j = 1;
//	while (i == j && i<=u_row && j<=u_cols)
//	{
//		s_main = s_main + arr1[i][j];
//		i++;
//		j++;
//	}
//	cout <<"Main diagonal sum="<< s_main;
//	cout << endl;
//	int r = 1;
//	int c = u_cols;
//
//	while (r <= u_row && c >= 1)
//	{
//		s_anti = s_anti + arr1[r][c];
//		r++;
//		c--;
//	}
//	cout <<"Sum of anti diagonal="<< s_anti;
//}