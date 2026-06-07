//#include<iostream>
//using namespace std;
//int main()
//{
//    int u_size,max=0,curr=0,jump=0;
//    int const size = 100;
//    int arr[size] = {};
//
//    cout << "Enter size of your array=";
//    cin >> u_size;
//    while (u_size < 0)
//    {
//        cout << "Enter valid data=";
//        cin >> u_size;
//    }
//    for (int i = 0;i < u_size;i++)
//    {
//        cout << "Enter numbers=";
//        cin >> arr[i];
//    }
//    if (u_size == 0)
//    {
//        cout << "Jump=0";
//    }
//    for (int i = 0;i<u_size;i++)
//    {
//        if (i + arr[i] > max)
//        {
//            max = i + arr[i];
//        }
//        if (i == curr)
//        {
//            jump++;
//            curr = max;
//        }
//        if (curr >= u_size - 1)
//            break;
//
//    }
//    cout << "Jumps required to reach end point=" << jump;
//}