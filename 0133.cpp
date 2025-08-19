#include<iostream>
using namespace std;
bool check(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
void solve()
{
	int n; 
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if (check(i))
			cout << i << " ";
	}
	cout << endl;
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
