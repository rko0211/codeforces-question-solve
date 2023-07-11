#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll s = 0;
    ll maxi = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
    }
    if (maxi <= 0)
    {
        cout << maxi << endl;
        return;
    }
    ll res = LLONG_MIN;
    for (int i = 0; i < n; i += 2)
    {
        if (a[i] > 0)
            s += a[i];
        res = max(res, s);
    }
    s = 0;
    for (int i = 1; i < n; i += 2)
    {
        if (a[i] > 0)
        {
            s += a[i];
        }
    }
    cout << max(res, s) << endl;
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