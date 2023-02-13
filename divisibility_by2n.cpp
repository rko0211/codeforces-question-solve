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
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        while (a[i] % 2 == 0)
        {
            count++;
            a[i] /= 2;
        }
    }
    vector<ll> v;
    for (int i = 2; i <= n; i++)
    {
        int j = i;
        int k = 0;
        while (j % 2 == 0)
        {
            k++;
            j /= 2;
        }
        if (k > 0)
        {
            v.push_back(k);
        }
    }
    sort(v.begin(), v.end());
    int m = v.size();
    ll ans = 0;
    for (int i = m - 1; i >= 0 && (n - count) > 0; i--)
    {
        count += v[i];
        ans++;
    }
    if (count < n)
        cout << -1 << endl;
    else
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