//#include <iostream>
//using namespace std;
//
//void swap(int* arr, int size) 
//{
//        int center = size / 2;
//        for (int i = 0; i < center; i++) {
//            int temp = *(arr + i);
//            *(arr + i) = *(arr + center + i);
//            *(arr + center + i) = temp;
//        }
//}
//int main() {
//    int arr[100];
//
//    int size;
//    cout << "Enter the size of the array: ";
//    cin >> size;
//
//    for (int i = 0; i < size; i++) 
//    {
//        cout << "Enter the value: ";
//        cin >> arr[i];
//    }
//    swap(arr, size);
//
//    cout << "Resultant array=";
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//}