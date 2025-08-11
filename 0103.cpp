#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int n;
	cin >> n;
	double tong = 0;
	for (int i = 1; i <= n; i++)
	{
		double j;
		j = 1 / (double)i;
		tong += j;
	}
	cout <<fixed<<setprecision(4)<< tong;
	return 0;
}