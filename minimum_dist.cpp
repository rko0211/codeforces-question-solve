#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int m = 2 * n;
    int a[m];
    for (int i = 0; i < m; i++)
        cin >> a[i];
    sort(a, a + m);
    int i = 0;
    int j = n;
    vector<pair<int, int>> vp;
    while (i < n)
    {
        vp.push_back({a[i], a[j]});
        i++;
        j++;
    }
    // sort(vp.begin(), vp.end());
    int ans = 0;
    for (int i = 1; i < vp.size(); i++)
    {
        int x = abs(vp[i].first - vp[i - 1].first);
        int y = abs(vp[i].second - vp[i - 1].second);
        ans += (x + y);
    }
    cout << ans << endl;
    for (auto &it : vp)
    {
        cout << it.first << " " << it.second << endl;
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