#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, s, m;
  cin >> n >> s >> m;
  vector<pair<ll, ll>> vp;
  vp.push_back({0, 0});
  for (int i = 0; i < n; i++)
  {
    ll l, r;
    cin >> l >> r;
    vp.push_back({l, r});
  }
  vp.push_back({m, m});
  for (int i = 0; i < vp.size() - 1; i++)
  {
    if ((vp[i + 1].first - vp[i].second) >= s)
    {
      cout << "YES\n";
      return;
    }
  }

  cout << "NO\n";
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