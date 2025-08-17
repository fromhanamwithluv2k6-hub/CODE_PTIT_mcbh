#include<iostream>
#include<string.h>
using namespace std;
bool check(string s)
{
	int l = s.size();
	for (int i = 0; i < l / 2; i++)
	{
		int x = s[i] - '0';
		int y = s[l - 1 - i] - '0';
		if (x != y)
			return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		if (check(s))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;

}
