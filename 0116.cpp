#include<iostream>

using namespace std;
int tong(int n)
{
	int sum = 0;
	while (n > 0)
	{
		int t = n % 10;
		sum += t;
		n /= 10;
	}
	return sum;
}
void solve()
{
	int n;
	cin >> n;
	int sum = tong(n);
	while (sum >= 10)
	{
		sum = tong(sum);
	}
	cout << sum << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}