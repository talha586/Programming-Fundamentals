//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	float length, width,area,costrf,costcard,costglass,price,chrownprice,costff,colorprice,number;
//	char a,r,f, chrown ,y,n,color,x,z;
//
//
//	cout << "Enter the length of picture(inches)=";
//	cin >> length;
//	cout << "Enter the width of picture(inches)=";
//	cin >> width;
//	area = length * width;
//	cout << "Enter r for regular and f for fancy frames=";
//	cin >> a;
//	cout << "Enter yes(x) or no(z) for coloring frame=";
//	cin >> color;
//	cout << "Type n for not to use crown and y for to use=";
//	cin >> chrown;
//	cout << "Enter the number of crown=";
//	cin >> number;
//	costcard = 0.02 * area;
//	costglass = 0.07 * area;
//
//	if (a == 'r')
//	{
//		costrf = 0.15 * area;
//		if (chrown == 'n' && color=='z')
//		{
//			price = costcard + costglass + costrf;
//			cout << "The total price=" << price << endl;
//		}
//		else if (chrown == 'n' && color == 'x')
//		{
//			colorprice = 0.1 * area;
//			price = costcard + costglass + costrf + colorprice;
//			cout << "The total price=" << price << endl;
//		}
//		else if (chrown == 'y' && color=='z')
//		{
//
//			chrownprice = 0.35 * number;
//			price = costcard + costglass + costrf + chrownprice;
//			cout << "The total price=" << price << endl;
//		}
//		else if (chrown == 'y' && color == 'x')
//		{
//			colorprice = 0.1 * area;
//			chrownprice = 0.35 * number;
//			price = costcard + costglass + costrf + chrownprice +colorprice;
//			cout << "The total price=" << price << endl;
//		}
//		else {
//			cout << "You have entered invalid input" << endl;
//		}
//	}
//	else if (a == 'f')
//	{
//		costff = 0.25 * area;
//		if (chrown == 'n' && color=='z')
//		{
//			price = costff + costcard + costglass;
//			cout << "The total price=" << price<<endl;
//		}
//		else if (chrown == 'n' && color == 'x')
//		{
//			colorprice = 0.1 * area;
//			price = costff + costcard + costglass+colorprice;
//			cout << "The total price=" << price << endl;
//		}
//		else if (chrown == 'y' && color=='x')
//		{
//			colorprice = 0.1 * area;
//			chrownprice = 0.35 * area;
//			price = costcard + costglass + costff + chrownprice+ colorprice;
//			cout << "The total price=" << price<<endl;
//		}
//		else if (chrown == 'y' && color == 'z')
//		{
//			chrownprice = 0.35 * area;
//			price = costcard + costglass + costff + chrownprice;
//			cout << "The total price=" << price << endl;
//		}
//		else {
//			cout << "You have entered invalid input" << endl;
//		}
//	}
//	system("pause>0");
//}
