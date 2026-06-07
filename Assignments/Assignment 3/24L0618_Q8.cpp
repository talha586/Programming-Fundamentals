//#include<iostream>
//using namespace std;
//int main()
//{
//    int const size = 100;
//	int arr[size] = {};
//	int u_size,num,diffA,diffB,k,close,diff,mindiff=10,counter=0,count=0;
//
//	cout << "Enter the size of array=";
//	cin >> u_size;
//	cout << "Enter number whose closest value you want to find=";
//	cin >> num;
//	cout << "Enter the value of index=";
//	cin >> k;
//	for (int i = 0;i < u_size;i++)
//	{
//		cout << "Enter number=";
//		cin >> arr[i];
//	}
//	while (k >= u_size)
//	{
//		cout << "Enter valid data";
//		cin >> k;
//	}
//	while (k < u_size)
//	{
//		for (int i = 0;i< u_size;i++)
//		{
//			if (arr[i] == num)
//			{
//				close = i;
//				break;
//			}
//			else
//			{
//				diff = num - arr[i];
//				if (diff < 0)
//					diff = -diff;
//				if (diff < mindiff)
//				{
//					mindiff = diff;
//					close = i;
//				}
//			}
//		}
//		break;
//	}
//	cout <<"Index closest to number="<< close<<endl;
//
//	int sta = num-k;
//	if (sta < 0)
//		sta= -sta;
//	int end = num+k;
//	for (int i = 0;i < u_size;i++)
//	{
//		if (arr[i] >= sta && arr[i]<= end)
//			cout << arr[i] << " ";
//	}
//}

