#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin >> n;
    if (n < 2)
    {
        cout << -1 << endl;
        return;
    }
    if (n <= 1000000)
    {
        cout << 1 << " " << 1 << " " << (n - 1) << endl;
    }
    else if (n > 1000000 && n % (1000000) != 0)
    {
        cout << 1000000 << " " << n / 1000000 << " " << n % 1000000 << endl;
    }
    else
    {
        cout << 1000000 << " " << n / 1000000 - 1 << " " << 1000000 << endl;
    }
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