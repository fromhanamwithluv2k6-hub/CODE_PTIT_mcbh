#include<iostream>
#include<string>
using namespace std;
void solve()
{
	string s;
	cin >> s;
	int l = s.size();
	int x = s[l - 2] - '0';
	int y = s[l - 1] - '0';
	if (x == 8 && y == 6)
		cout << 1 << endl;
	else
		cout << 0 << endl;
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