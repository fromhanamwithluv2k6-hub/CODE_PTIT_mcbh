#include<iostream>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			int d = 0;
			while (n % i == 0)
			{
				d++;
				n /= i;
			}
			cout << i << " " << d << " ";
		}
		if (n == 1)
			break;
	}
	if (n > 1)
		cout << n << " " << 1 << endl;
	else
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