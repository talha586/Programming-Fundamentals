//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o;
//
//	cout << "Enter the ACR of 1 member of Team 1=";
//	cin >> a;
//	cout << "Enter the ACR of 2 member of Team 1=";
//	cin >> b;
//	cout << "Enter the ACR of 3 member of Team 1=";
//	cin >> c;
//	cout << "Enter the ACR of 4 member of Team 1=";
//	cin >> d;
//	cout << "Enter the ACR of 5 member of Team 1=";
//	cin >> e;
//	cout << "Enter the ACR of 1 member of Team 2=";
//	cin >> f;
//	cout << "Enter the ACR of 2 member of Team 2=";
//	cin >> g;
//	cout << "Enter the ACR of 3 member of Team 2=";
//	cin >> h;
//	cout << "Enter the ACR of 4 member of Team 2=";
//	cin >> i;
//	cout << "Enter the ACR of 5 member of Team 2=";
//	cin >> j;
//	cout << "Enter the ACR of 1 member of Team 3=";
//	cin >> k;
//	cout << "Enter the ACR of 2 member of Team 3=";
//	cin >> l;
//	cout << "Enter the ACR of 3 member of Team 3=";
//	cin >> m;
//	cout << "Enter the ACR of 4 member of Team 3=";
//	cin >> n;
//	cout << "Enter the ACR of 5 member of Team 3=";
//	cin >> o;
//
//	float team1 = 0.1 * a + 0.1 * b + 0.1 * c + 0.1 * d + 0.1 * e;
//	float team2 = 0.1 * f + 0.1 * g + 0.1 * h + 0.1 * i + 0.1 * j;
//	float team3 = 0.1 * k + 0.1 * l + 0.1 * m + 0.1 * n + 0.1 * o;
//	cout << "The ACR of team1=" << team1<<endl;
//	cout << "The ACR of team2=" << team2<<endl;
//	cout << "The ACR of team3=" << team3 << endl;
//	if (team1>team2 && team1>team3 && team2>team3)
//	{
//		cout << "Strongest Squad=" << team1<<endl;
//		cout << "Weakest Squad=" << team3<<endl;
//		cout << "STANDINGS:"<<endl;
//		cout << "TEAM 2 VS TEAM 3"<<endl;
//		cout << "TBD VS TEAM1" << endl;
//
//	}
//	else if (team1 > team2 && team1 > team3 && team3 > team2)
//	{
//		cout << "Strongest Squad=" << team1 << endl;
//		cout << "Weakest Squad=" << team2 << endl;
//		cout << "STANDINGS:" << endl;
//		cout << "TEAM 2 VS TEAM 3" << endl;
//		cout << "TBD VS TEAM1" << endl;
//
//	}
//	else if (team2>team1 && team2>team3 && team1 > team3)
//	{
//		cout << "Strongest Squad=" << team2<<endl;
//		cout << "Weakest Squad=" << team3<<endl;
//		cout << "STANDINGS:" << endl;
//		cout << "TEAM 1 VS TEAM 3" << endl;
//		cout << "TBD VS TEAM2" << endl;
//	}
//	else if (team2 > team1 && team2 > team3 && team3 > team1)
//	{
//		cout << "Strongest Squad=" << team2<<endl;
//		cout << "Weakest Squad=" << team1<<endl;
//		cout << "STANDINGS:" << endl;
//		cout << "TEAM 1 VS TEAM 3" << endl;
//		cout << "TBD VS TEAM2" << endl;
//	}
//	else if (team3 > team1 && team3 > team2 && team1 > team2)
//	{
//		cout << "Strongest Squad=" << team3<<endl;
//		cout << "Weakest Squad=" << team2<<endl;
//		cout << "STANDINGS:" << endl;
//		cout << "TEAM 1 VS TEAM 2" << endl;
//		cout << "TBD VS TEAM 3" << endl;
//	}
//	else if (team3 > team1 && team3 > team2 && team2 > team1)
//	{
//		cout << "Strongest Squad=" << team3<<endl;
//		cout << "Weakest Squad=" << team1<<endl;
//		cout << "STANDINGS:" << endl;
//		cout << "TEAM 1 VS TEAM 2" << endl;
//		cout << "TBD VS TEAM 3" << endl;
//	}
//	system("pause>0");
//}