//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	float offm, onm, sms, data ;
//	double price;
//	
//
//	cout << " Mega Package : (Subscription charges : 599)\n";
//	cout << "a) Offnet Minutes : 1500 (1.5 rupee per minute will be charged for additional minutes)\n";
//	cout << "b) on - net Minutes : 2500 (0.75 rupee per minute will be charged for additional minutes)\n";
//	cout<<	"c) SMS: 700 (0.5 rupee per message will be charged for additional messages)\n";
//	cout << "d) Mobile Data : 10 GB(8.5 rupee per GB will be charged for additional data usage)\n";
//	cout << "Supreme: (Subscription charges : 1199)\n";
//	cout << "	a) Offnet Minutes : 2000 (1.25 rupee per minute will be charged for additional minutes)\n";
//	cout<<"b) on - net Minutes : 3000 (0.65 rupee per minute will be charged for additional minutes)\n";
//	cout << "	c) SMS: 1000 (0.45 rupee per minute will be charged for additional minutes)\n";
//    cout<<"	d) Mobile Data : 20 GB(6.5 rupee per GB will be charged for additional data usage)\n";
//	cout << "	• Premium : (Subscription charges : 2500)\n";
//    cout<<"	a) Offnet Minutes : Unlimited\n";
//	cout << "	b) on - net Minutes : Unlimited\n";
//	cout << "c) SMS: Unlimited\n";
//    cout<<"	d) Mobile Data : Unlimited\n";
//
//	cout << "Enter the required offnet minutes=";
//	cin >> offm;
//	cout << "Enter the required on net minutes=";
//	cin >> onm;
//	cout << "Enter the required SMS=";
//	cin >> sms;
//	cout << "Enter the required Mobile data=";
//	cin >> data;
//    
//	if (offm > 2000 || onm > 3000 || sms > 1000 && data > 20)
//	{
//price = 2500.0;
//		
//	}
//
//	if (offm > 1500 && offm <= 2000 || onm > 2500 && onm <= 3000 || sms > 700 && sms <= 1000 || data > 10 && data <= 20)
//	{
//	price = 1200.0;
//		
//	}
//	 if (offm > 2000 || onm > 3000 || sms > 1000 && data > 20)
//	{
//		price = 1200 + (offm - 2000) * 1.25 + (onm - 3000) * 0.65 + (sms - 1000) * 0.45 + (data - 20) * 6.5;
//		
//	}
//	if (offm > 0 && offm <= 1500 || onm > 0 && onm <= 2500 || sms > 0 && sms <= 700 || data > 0 && data <= 10)
//	{
//		price = 600.0;
//		
//	}
//	 else if (offm > 1500 && onm > 2500 && sms > 700 && data > 10)
//	{
//		price = 600 + (offm - 1500) * 1.5 + (onm - 2500) * 0.75 + (data - 700) * 8.5;
//		
//	}
//
//	if (price>0 &&   price < 899 )
//	{
//		cout << "the mega package is suitable\n";
//	}
//
//	else if ( price >899 && price < 1849)
//	{
//		cout << "The supreme package is suitable\n";
//	}
//
//	else {
//		cout << "The premium package is suitable\n";
//	}
//	system("pause>0");
//
//
//}