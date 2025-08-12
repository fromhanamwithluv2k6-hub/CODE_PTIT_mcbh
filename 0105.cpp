#include<iostream>
#include<string.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	int l = s.size();
	int cnt = 0;
	for(int i=0 ; i<l ; i++)
	{
		int x = s[i] - '0';
		if (x == 0 || x == 6 || x == 8)
			cnt++;
		else
		{
			cout << "NO" << endl;
			break;
		}
	}
	if (cnt == l)
		cout << "YES" << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}