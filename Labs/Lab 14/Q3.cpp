#include<iostream>
using namespace std;
void reverseArray(int* arr, int size)
{
	int* start, *end;
	start = arr;
	end = arr + size - 1;
	while (start<end)
	{
		int temp;
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

int main()
{
	int arr[100], size;
	cout << "Enter size=";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter number=";
		cin >> arr[i];
	}

	reverseArray(arr,size);

	cout << "Reversed array=";
	for (int i = 0; i < size; i++)
	{

		cout << arr[i]<<" ";
	}
}