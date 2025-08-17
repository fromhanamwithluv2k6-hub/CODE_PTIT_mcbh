#include<iostream>
using namespace std;
long long ucln(long long a,long long b)
{
	while (b > 0)
	{
		long long x = a % b;
		a = b;
		b = x;
	}
	return a;
}
void solve()
{
	long long n;
	cin >> n;
	long long r = 1;
	for (long long i = 1; i <= n; i++)
	{
		long long l = ucln(r, i);
		r = r * i / l;
	}
	cout << r << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}