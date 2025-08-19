#include<iostream>
#include<cmath>
using namespace std;
void solve()
{
	long long n;
	cin >> n;
	for (int i = 2; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			cout << i << " ";
			n /= i;
		}
		if (n == 1)
		{
			cout << endl;
			break;
		}
	}
	if (n > 1)
		cout << n << endl;
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