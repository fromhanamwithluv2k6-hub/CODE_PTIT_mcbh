#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
void solve()
{
	long long n;
	cin >> n;
	int cnt = 0;
	vector<long long> v;
	for (long long i = 2; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			cnt++;
			v.push_back(i);
			n /= i;
		}
		if (n == 1)
		{
			break;
		}
	}
	if (n > 1)
	{
		cnt++;
		v.push_back(n);
	}
	cout << v[cnt - 1]<<endl ;
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