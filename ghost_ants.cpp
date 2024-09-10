#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n, t;
  cin >> n >> t;
  string s;
  cin >> s;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<ll> posdir;
  vector<ll> negdir;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '1')
    {
      posdir.emplace_back(a[i]);
    }
    else
    {
      negdir.emplace_back(a[i]);
    }
  }
  if (posdir.size() == 0 || negdir.size() == 0)
  {
    cout << "0\n";
    return;
  }
  // sort(posdir.begin(), posdir.end());
  sort(negdir.begin(), negdir.end());
  ll ans = 0;
  for (int i = 0; i < posdir.size(); i++)
  {
    ll val = posdir[i];
    ll loind = lower_bound(negdir.begin(), negdir.end(), val) - negdir.begin();
    ll hiind = lower_bound(negdir.begin(), negdir.end(), (val + 2 * t)) - negdir.begin();

    while (negdir[hiind] > (val + 2 * t) || hiind >= negdir.size())
    {
      if (hiind == 0)
      {
        hiind = -2e9;
        break;
      }
      hiind--;
    }

    if (loind < 0)
      loind = 2e9;
    ans += max(hiind - loind + 1, 0 * 1ll);
  }
  cout << ans << endl;
}
int main()
{

  solve();

  return 0;
}