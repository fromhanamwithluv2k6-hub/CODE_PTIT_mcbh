#include<iostream>

using namespace std;

void solve()
{
	long long n;
	cin >> n;
	for (long long i = 2; i <= sqrt(n); i++)
	{
		int cnt = 0;
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				n /= i;
				cnt++;
			}
		}
		if(cnt!=0)
			cout << i << " " << cnt << endl;
		if (n == 1)
			break;

	}
	if (n > 1)
		cout << n <<" "<< 1;
}
int main()
{
	solve();
	return 0;
}