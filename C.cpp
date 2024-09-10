#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n;
  cin >> n;
  ll x = n;
  if (n <= 1)
  {
    cout << 1 << endl;
    cout << n << endl;
    return;
  }
  int cnt = 1;
  vector<int> d;
  while (x > 0)
  {
    if (x & 1 == 1)
    {
      cnt++;
    }
    d.push_back(x & 1);
    x >>= 1;
  }
  if (cnt == 2)
  {
    cout << 1 << endl;
    cout << n << endl;
    return;
  }
  x = n;
  vector<ll> ans;
  ans.push_back(n);
  // cout << d.size() << endl;
  for (ll i = 0; i < d.size(); i++)
  {
    // cout << d[i] << " ";
    if (d[i] == 1)
    {

      ll val = pow(2ll, i);
      ll t = x ^ val;
      ans.push_back(t);
    }
  }
  // cout << endl;
  reverse(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
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