#include<iostream>
using namespace std;
 long long ucln(long long a, long long b)
{
	if (a <= 1 || b <= 1)
		return 1;
	while (b > 0)
	{
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;

}
void solve()
{
	long long a,b;
	cin >> a >>b;
	cout << a * b / ucln(a, b) << " " << ucln(a, b) << endl;

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