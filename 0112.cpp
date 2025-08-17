#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void solve()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	double dis;
	dis = sqrt((a - c) * (a - c) + (b - d) * (b - d));
	cout <<fixed<<setprecision(4)<< dis<<endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
}