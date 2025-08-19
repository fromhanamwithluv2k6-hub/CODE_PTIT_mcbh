#include<iostream>
#include<cmath>
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
void swapp(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void solve()
{
	int n, m;
	cin >> n >> m;
	if (n > m)
		swapp(&n, &m);
	for (int i = n; i <= m; i++)
	{
		if (check(i))
			cout << i << " ";
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
		cout << endl;
	}
	return 0;
}