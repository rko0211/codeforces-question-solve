#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{

    ll n, k;
    cin >> n >> k;
    ll a[k];
    for (int i = 0; i < k; i++)
        cin >> a[i];
    sort(a, a + k);

    ll loc = 0;
    ll dif;
    int ans = 0;
    for (int i = k - 1; i >= 0; i--)
    {
        if (loc >= a[i])
        {
            break;
        }
        dif = (n - a[i]);
        loc += dif;

        ans++;
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