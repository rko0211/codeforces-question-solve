#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll xc, yc, k;
  cin >> xc >> yc >> k;

  ll val1 = k * xc;
  ll val2 = k * yc;
  vector<pair<ll, ll>> ans;
  ll s1 = 0;
  ll s2 = 0;
  ll i = 1;
  ll j = 1;
  while (k > 1)
  {
    ans.push_back({i, j});
    s1 += i;
    s2 += j;

    i++;
    j++;
    k--;
  }

  ans.push_back({val1 - s1, val2 - s2});

  for (auto &it : ans)
  {
    cout << it.first << " " << it.second << endl;
  }
  // cout << endl;
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