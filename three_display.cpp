#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll n;
    cin >> n;
    // vector<ll> size(n, 0), cost(n, 0);
    ll size[n]={0};
    ll cost[n]={0};
    for (int i = 0; i < n; i++)
        cin >> size[i];
    for (int i = 0; i < n; i++)
        cin >> cost[i];

    vector<vector<ll>> dpp(n + 1, vector<ll>(4, INT_MAX));
    ll ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        dpp[i][1] = cost[i];
        for (int j = 0; j < i; j++)
        {
            if (size[j] < size[i])
            {
                dpp[i][2] = min(dpp[i][2], (cost[i] + dpp[j][1]));
                dpp[i][3] = min(dpp[i][3], (cost[i] + dpp[j][2]));
            }
        }
        ans = min(ans, dpp[i][3]);
    }
    if (ans == INT_MAX)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}