#include<iostream>
#include<cmath>

using namespace std;

int check(long long i, int n)
{
	int cnt = 0;
	while (i > 0)
	{
		int k = i % 10;
		if (k % 2 == 0)
			cnt++;
		i /= 10;
	}
	if (cnt == n / 2)
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	long long m[100000] = { 0 };
	cin >> n;
	long long min = pow(10, n-1);
	long long max = pow(10, n);
	int cnt = 1;
	for (long long i = min; i < max; i++)
	{
		if (check(i, n) == 1)
		{
			if (cnt % 10 != 0)
				cout << i << " ";
			else
				cout << i << endl;
			cnt++;
		}
	}
}