#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll m, n, d;
    ll move;

   

    
    ll j;
    cin >> n >> m >> d;
    ll a[m];ll pos[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> j;
        pos[j] = i;
    }

    for (int i = 0; i < m; i++)
        cin >> a[i];


    ll ans = 1000000;
    for (int i = 0; i < m - 1; i++)
    {
        if (pos[a[i]] > pos[a[i + 1]])
        {
            ans = 0;
            break;
        }
        else if (pos[a[i + 1]] > pos[a[i]] + d)
        {
            ans = 0;
            break;
        }
        else
        {

            move = (d + 1) - (pos[a[i + 1]] - pos[a[i]]);
            if (move <= (pos[a[i]] - 1 + n - pos[a[i + 1]]))
            {
                ans = min(ans, move);
            }

            ans = min(ans, (pos[a[i + 1]] - pos[a[i]]));
        }
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
};