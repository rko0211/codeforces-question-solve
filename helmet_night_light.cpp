#include <bits/stdc++.h>
using namespace std;
#define ll long long int
static bool cmp(pair<int, int> &p1, pair<int, int> &p2)
{
    if (p1.second != p2.second)
    {
        return p1.second < p2.second;
    }
    return p1.first > p2.first;
}
void solve()
{
    int n, p;

    cin >> n >> p;

    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<pair<int, int>> vp;
    
    for (int i = 0; i < n; i++)
    {
        int x = min(b[i], p);
        vp.push_back(make_pair(a[i],x));
    }
    sort(vp.begin(), vp.end(), cmp);

    ll ans = 0;
    ans += p;
    int people = n;
    people -= 1;
    for (int i = 0; people > 0 and i < vp.size(); i++)
    {
        ans += (min(vp[i].first, people) * 1LL * vp[i].second);
        people -= min(vp[i].first, people);
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
