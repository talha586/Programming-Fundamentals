//#include<iostream>
//using namespace std;
//int main()
//{
//	char arr1[100][100], arr2[100][100], info[5] = {'a', 'e', 'i', 'o', 'u'};
//	int cols, row,counter=0;
//	cout << "Enter number of rows=";
//	cin >> row;
//	cout << "Enter number of columns=";
//	cin >> cols;
//	while (cols < 0 || row < 0)
//	{
//		if (cols < 0)
//		{
//			cout << "Enter valid data for rows=";
//			cin >> cols;
//		}
//		if (cols < 0)
//		{
//			cout << "Enter valid data for rows=";
//			cin >> row;
//		}
//	}
//	for (int i = 0;i < row;i++)
//	{
//		for (int j = 0;j < cols;j++)
//		{
//			cout << "Enter data=";
//			cin >> arr1[i][j];
//		}
//	}
//	for (int i = 0;i < row;i++)
//	{
//		for (int j = 0;j < cols;j++)
//		{
//			for (int k = 0;k < 5;k++)
//			{
//				if (info[k] == arr1[i][j] || info[k] == arr2[i][j])
//					counter++;
//			}
//		}
//	}
//	cout << "No of vowels=" << counter;
//}