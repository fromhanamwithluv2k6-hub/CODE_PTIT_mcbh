#include <iostream>
#include <string.h>
using namespace std;
void solve()
{
    char c;
    cin >> c;
    int x = (int)c;
    if (x >= 65 && x <= 90)
        x += 32;
    else if (x >= 97 && x <= 122)
        x -= 32;
    cout << (char)x << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
