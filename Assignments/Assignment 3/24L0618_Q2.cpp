//#include<iostream>
//using namespace std;
//int main()
//{
//	int const size1 = 3;
//	int const size2 = 4;
//	int const size3 = 5;
//	int const size4 = 12;
//	int const size5 = 7;
//	int arr1[size1] = {};
//	int arr2[size2] = {};
//	int arr3[size3] = {};
//	int res[size4] = {};
//	int temp[size5] = {};
//	int k = 0, i = 0, j = 0;
//	for (int i = 0;i < size1;i++)
//	{
//		cout << "Enter number for 1st array=";
//		cin >> arr1[i];
//	}
//	for (int i = 0;i < size2;i++)
//	{
//		cout << "Enter number for 2nd array=";
//		cin >> arr2[i];
//	}
//	for (int i = 0;i < size3;i++)
//	{
//		cout << "Enter number for 3rd array=";
//		cin >> arr3[i];
//	}
//	while (i < 7)
//	{
//		if (i < 3)
//		{
//			temp[i] = arr1[i];
//		}
//		else if (i >= 3)
//		{
//			temp[i] = arr2[k];
//			k++;
//		}
//		i++;
//	}
//	for (int i = 0;i < size5 - 1;i++)
//	{
//		for (int j = i + 1;j < size5;j++)
//		{
//			if (temp[i] > temp[j]) {
//				int a;
//				a = temp[i];
//				temp[i] = temp[j];
//				temp[j] = a;
//			}
//		}
//	}
//	for (int i = 0;i < size5;i++)
//	{
//		cout << temp[i] << " ";
//	}
//	cout << endl;
//	i = 0, j = 0, k = 0;
//	while (i < size5 || j < size3 ||k<size4)
//	{
//		if (temp[i] <= arr3[j])
//		{
//			res[k] = temp[i];
//			k++;
//			i++;
//			if (j >= size3)
//			{
//				res[k] = temp[i];
//				res[k + 1] = temp[i + 1];
//				break;
//			}
//		}
//	    else if (temp[i] >= arr3[j])
//		{
//			res[k] = arr3[j];
//			j++;
//			k++;
//			if (j >= size3)
//			 {
//				res[k] = temp[i];
//				res[k + 1] = temp[i + 1];
//				break;
//			 }
//		}
//	}
//	for (int k = 0;k < size4;k++)
//	{
//		cout << res[k] << " ";
//	}
//
//}
