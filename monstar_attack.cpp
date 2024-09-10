#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll k1;
  cin >> k1;
  vector<pair<ll, ll>> vp;
  int ind = 0;
  ll a[n];
  ll x[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }

  map<ll, ll> m;
  for (int i = 0; i < n; i++)
  {
    m[abs(x[i])] += a[i];
  }

  for (auto &it : m)
  {
    vp.push_back({it.first, it.second});
  }

  int dist = 0;
  int k = k1;

  bool ok = true;
  long long lft = 0;
  for (int i = 1; i <= n; ++i)
  {
    lft += k - [i];
    ok &= (lft >= 0);
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