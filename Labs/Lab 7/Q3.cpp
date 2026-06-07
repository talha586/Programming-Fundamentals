//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//    int const size = 100;
//    char arr[size] = {};
//    cout << "Enter data:";
//    cin.getline(arr, size);
//    int count = 0;
//    for (int i = 0; arr[i] != '\0'; i++)
//    {
//        count++;
//    }
//    for (int i = count - 1; i >= 0; i--) 
//    {
//        if (arr[i] == ' ') 
//        {
//            for (int j = i + 1; j < count && arr[j] != ' '; j++) {
//                cout << arr[j];
//            }
//            cout << " ";
//        }
//    }
//    for (int i = 0; arr[i] != ' '; i++) {
//        cout << arr[i];
//    }
//}