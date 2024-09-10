#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n, k, a, b;
  cin >> n >> k >> a >> b;

  vector<pair<ll, ll>> city;
  int i = 1;
  while (i <= n)
  {
    ll x, y;
    cin >> x >> y;
    city.push_back({x, y});

    i++;
  }
  if ((a) <= k && b <= k)
  {
    cout << 0 << endl;
    return;
  }

  // both are outside
  ll x1 = city[a - 1].first;
  ll y1 = city[a - 1].second;
  ll x2 = city[b - 1].first;
  ll y2 = city[b - 1].second;
  ll ans = (abs(x1 - x2) + abs(y1 - y2));
  ll v1 = LLONG_MAX / 2;
  ll v2 = LLONG_MAX / 2;
  for (int i = 0; i < k; i++)
  {
    v1 = min(v1, (abs(x1 - city[i].first) + abs(y1 - city[i].second)));
    v2 = min(v2, ((abs(city[i].first - x2) + abs(city[i].second - y2))));
  }
  ans = min(ans, (v1 + v2));
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