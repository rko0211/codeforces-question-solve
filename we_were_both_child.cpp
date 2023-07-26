#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<ll> m(n + 2, 0);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > n)
            continue;
        m[a[i]]++;
    }
    ll ans = LLONG_MIN;
    for (int i = 1; i <= n; i++)
    {
        ll here = 0;
        for (int x = 1; x * x <= i; x++)
        {
            if (i % x == 0)
            {
                here += m[x];
                if (x * x != i)
                {
                    here += m[i / x];
                }
            }
        }
        ans = max(ans, here);
    }
    cout << ans << endl;
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