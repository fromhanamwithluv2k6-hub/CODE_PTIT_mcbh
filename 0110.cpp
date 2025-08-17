#include<iostream>
#include<string>
using namespace std;
void solve()
{
	string s;
	cin >> s;
	int l = s.size();
	string a = "084";
	for (int i = 0; i < l; i++)
	{
		int cnt = 0;
		for (int j = 0; j < 3; j++)
		{
			int x = a[j] - '0';
			int y = s[i + j] - '0';
			if (x==y)
				cnt++;
		}
		if (cnt == 3)
		{
			s.erase(i, 3);
			break;
		}	
	}
	cout << s << endl;
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