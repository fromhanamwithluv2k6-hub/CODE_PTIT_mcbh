#include<iostream>
#include<string>
using namespace std;
void solve()
{
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.size() - 1; i++)
	{
		int x = s[i] - '0';
		int y = s[i + 1] - '0';
		if (x == y+1 || x == y-1)
			cnt++;
	}
	if (cnt == s.size() - 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
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