
#include <iostream>

using namespace std;
long long giaithua(int n)
{
	long long gt = 1;
	for (int i = 2; i <= n; i++)
		gt *= i;
	return gt;
}
int main()
{
	int n;
	cin >> n;
	long long tong=0;
	for (int i = 1; i <= n; i++)
		tong += giaithua(i);
	cout << tong;
}
