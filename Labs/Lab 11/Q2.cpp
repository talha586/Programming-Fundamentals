//#include<iostream>
//using namespace std;
//char unit;
//float gettemp(char&unit,float& temp)
//{
//	do
//	{
//		cout << "Enter unit:";
//		cin >> unit;
//		break;
//
//	} while (unit!='C' || unit!='F');
//
//	cout << "Enter temperature=";
//	cin >> temp;
//	return temp;
//
//}
//float converttoCelsius(float& temp,float&celsius)
//{
//	celsius = (temp - 32) * (5 / 9);
//	return celsius;
//}
//float converttofarh(float& temp, float& farh)
//{
//	farh = temp*(5/9)+32;
//	return farh;
//}
//int main()
//{
//	float temp,celsius,farh;
//
//	gettemp(unit, temp);
//	if (unit == 'F')
//	{
//		converttoCelsius(temp, celsius);
//		cout << "Temperature in celsius=" << celsius;
//	}
//	else if (unit == 'C')
//	{
//		converttofarh(temp, farh);
//		cout << "Temperature in farhenheit=" << farh;
//	}
//}