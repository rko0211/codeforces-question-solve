#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  map<ll, int> mp;
  for (int i = 0; i < n; i++)
  {
    mp[a[i]]++;
  }

  vector<pair<ll, int>> vp;
  for (auto &it : mp)
  {
    vp.push_back({it.first, it.second});
  }

  sort(vp.begin(), vp.end(), [](pair<ll, int> p1, pair<ll, int> p2)
       { return p1.second < p2.second; });

  int i = 0;
  int j = vp.size() - 1;
  ll len = n;
  ll ans = 0;

  while (i <= j)
  {
    ll dist = (j - i + 1);
    ll d_new;
    if (dist != 0)
      d_new = (len / dist) * dist;
    ans = max(ans, d_new);
    len -= vp[i].second;
    i++;
  }

  cout << ans << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
