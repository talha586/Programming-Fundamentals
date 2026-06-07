//#include<iostream>
//using namespace std;
//int* findmax(int*arr,int&size)
//{
//	int* max = arr;
//	for (int i=0;i<size;i++)
//	{
//		if (*(arr+i)>*max)
//		{
//			max = arr + i;
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	int size, arr[100];
//
//	cout << "Enter the size of array=";
//	cin >> size;
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter number=";
//		cin >> arr[i];
//	}
//	cout << "max value=" << *findmax(arr,size);
//}