//#include<iostream>
//#include<cstring>
//using namespace std;
//int main() 
//{
//	int count1 = 0, count2 = 0;
//	const int size = 100;
//	char arr1[size], arr2[size];
//	cout << "Enter the data ";
//	cin.getline(arr1, 100);
//	
//	bool found = true;
//	int j = 0;
//	    for (int i = 0; arr1[i] != '\0'; i++)
//    {
//        count1++;
//    }
//	    for (int i = 0; arr2[i] != '\0'; i++)
//    {
//        count2++;
//    }
//	for (int i = 0; arr1[i] != '\0'; i++) {
//		if (arr1[i] >= 'A' && arr1[i] <= 'Z') {
//			arr2[j] = arr1[i] + 32;
//			j++;
//		}
//		else if (arr1[i] >= 'a' && arr1[i] <= 'z') {
//			arr2[j] = arr1[i];
//			j++;
//		}
//	}
//	arr2[j] = '\0';
//     j = count2 - 1;
//	for (int i = 0; i < j; i++) {
//		if (arr2[i] != arr2[j]) {
//			found = false;
//			j--;
//			break;
//		}
//	}
//	if (found==true) {
//		cout << "Palindrome ";
//	}
//	else {
//		cout << "Not a palindrome ";
//	}
//
//	system("pause>0");
//	return 0;
//}