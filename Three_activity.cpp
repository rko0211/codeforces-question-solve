#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  vector<pair<ll, ll>> v1, v2, v3;
  for (int i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    v1.push_back({x, i});
  }
  for (int i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    v2.push_back({x, i});
  }
  for (int i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    v3.push_back({x, i});
  }

  sort(v1.begin(), v1.end());
  reverse(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());
  reverse(v2.begin(), v2.end());
  sort(v3.begin(), v3.end());
  reverse(v3.begin(), v3.end());
  ll ans = LLONG_MIN;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (v2[j].second == v1[i].second)
        continue;
      for (int k = 0; k < 3; k++)
      {
        if (v3[k].second == v1[i].second || v3[k].second == v2[j].second)
        {
          continue;
        }
        ans = max(ans, (v1[i].first + v2[j].first + v3[k].first));
      }
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