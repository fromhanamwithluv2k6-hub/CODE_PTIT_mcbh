#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void solve()
{
	int n, k;
	cin >> n >>k;
	vector<int> v;
	for (int i = 2; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			v.push_back(i);
			n /= i;
		}
		if (n == 1)
			break;
	}
	if (n > 1)
		v.push_back(n);
	if (k > v.size())
		cout << -1 << endl;
	else
		cout << v[k - 1] << endl;
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