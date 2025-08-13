#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
using namespace std;
void solve()
{
	string a[] = { "A","B","B","A","D","C","C","A","B","D","C","C","A","B","D" };
	string b[] = { "A","C","C","A","B","C","D","D","B","B","C","D","D","B","B" };
	int n;
	cin >> n;
	string s;
	getline(cin, s);
	string y[101];
	string token;
	stringstream ss(s);
	int m = 0;
	while (ss >> y[m])
	{
		m++;
	}
	float cnt = 0;
	if (n == 101)
	{
		for (int i = 0; i < 15; i++)
			if (a[i] == y[i])
				cnt++;
	}
	else
	{
		for (int i = 0; i < 15; i++)
			if (b[i] == y[i])
				cnt++;
	}
	float diem = cnt * 10 / 15;
	cout <<fixed<< setprecision(2) << diem <<endl ;
}
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		solve();
	}
	return 0;
}
