//#include<iostream>
//using namespace std;
//int main()
//{
//	char arr[100][100];
//	int vowels=0, consonants = 0,r,c;
//	cout << "Enter number of rows=";
//	cin >> r;
//	cout << "Enter number of columns=";
//	cin >> c;
//
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << "Enter alphabet:";
//			cin >> arr[i][j];
//			if (arr[i][j] < 97)
//			{
//				arr[i][j] = arr[i][j] + 32;
//			}
//			if (arr[i][j] == 97 || arr[i][j] == 101 || arr[i][j] == 105 || arr[i][j] == 111 || arr[i][j] == 117)
//			{
//				vowels++;
//			}
//			else {
//				consonants++;
//			}
//		}
//	}
//	cout << "Vowels=" << vowels<<endl;
//	cout << "Consonants=" << consonants;
//
//
//
//
//
//}