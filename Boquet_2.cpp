#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, m;
  cin >> n >> m;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  ll b[n];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  map<ll, ll> mp;
  for (int i = 0; i < n; i++)
  {
    mp[a[i]] = b[i];
  }
  ll ans = 0;
  for (auto it = mp.begin(); it != mp.end(); it++)
  {
    ll key = it->first;
    ll c1 = it->second;
    ll c2 = 0;
    auto next_val = it;
    next_val++;
    if ((next_val->first) != key + 1)
      next_val = mp.end();
    if (next_val != mp.end())
    {
      c2 = next_val->second;
    }

    ll take1 = min(m / key, c1);
    ll rem = m - key * take1;
    ll take2 = 0;
    if (next_val != mp.end())
    {
      take2 = min(c2, rem / next_val->first);
    }

    ans = max(ans, (key * take1 + take2 * (next_val->first)));
    if (take1 > 0 && next_val != mp.end())
    {
      ll left = c2 - take2;
      ll left_second = rem - take2 * (next_val->first);
      ll remove = min({left_second, take1, left});
      take1 -= remove;
      take2 += remove;
      ans = max(ans, (key * take1 + take2 * (next_val->first)));
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
}