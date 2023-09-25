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
    ll val = 1;
    ll ans[n];
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && val <= ans[i - 1])
        {
            while (val <= ans[i - 1])
            {
                val++;
            }
        }
        while (val == a[i])
        {
            val++;
        }

        ans[i] = (val);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // cout << endl;
    cout << ans[n - 1] << endl;
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
