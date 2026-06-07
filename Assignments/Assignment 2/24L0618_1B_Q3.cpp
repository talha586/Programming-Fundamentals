//#include<iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	int subs, time, videos, views;
//	float likepercent;
//
//	cout << "Enter the number of subscribers=";
//	cin >> subs;
//	cout << "Watch time in past 12 months=";
//	cin >> time;
//	cout << "Videos per month in past year=";
//	cin >> videos;
//	cout << "Views on each video=";
//	cin >> views;
//	cout << "Percentage of likes of the total views=";
//	cin >> likepercent;
//
//	if (subs < 1000 && time < 4000 && videos < 2 && views < 10 && likepercent < 0.4)
//	{
//		cout << "Your channel is not monetized.";
//	}
//	else if (subs >= 1000 && time >= 4000 && videos >= 2 && views >= 10 && likepercent >= 0.4)
//	{
//		string m = "Monetized";
//		if (subs >= 10000000 && time > 12000) {
//			string d = "Diamond button";
//			cout << "Your channel is" << " " << m << " " << " and rewarded by youtube with" << " " << d << endl;
//		}
//		else if (subs >= 1000000 && time >= 10000) {
//			string g = "Gold button";
//			cout << "Your channel is" << " " << m << " " << "and rewarded by youtube with" << " " << g << endl;
//		}
//		else if (subs >= 100000 && time >= 8000) {
//			string s = "Silver button";
//			cout << "Your channel is " << " " << m << " " << "  and rewarded by youtube with" << " " << s << endl;
//		}
//	}
//	else {
//		cout << "Your channel is not monetized";
//	}
//	system("pause>0");
//}