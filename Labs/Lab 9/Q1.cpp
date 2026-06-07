

//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[100][100],temp[100][100];
//	int r, c;
//	cout << "Enter the number of rows=";
//	cin >> r;
//	cout << "Enter the number of columns=";
//	cin >> c;
//
//	while (c < 0 || r < 0)
//	{
//		if (r < 0)
//		{
//			cout << "Enter the number of rows=";
//			cin >> r;
//		}
//		if (c < 0)
//		{
//			cout << "Enter the size of columns=";
//			cin >> c;
//		}
//	}
//	for (int row = 0; row < r; row++)
//	{
//		for(int cols=0;cols<c;cols++)
//		{
//			cout << "Enter the number=";
//			cin >> arr[row][cols];
//		}
//	}
//	for (int row = 0; row < r; row++)
//	{
//		for (int cols = 0; cols < c; cols++)
//		{
//			temp[cols][row] = arr[row][cols];
//		}
//	}
//	for (int i = 0; i < c; i++)
//	{
//		cout << endl;
//		for (int j = 0; j < r; j++)
//		{
//			cout << temp[i][j]<<" ";
//
//		}
//	}
//}