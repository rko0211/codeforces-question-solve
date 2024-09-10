#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int m = 1000000007;
ll mod_inverse(ll x, ll mod)
{
  ll result = 1;
  ll pw = mod - 2;
  while (pw)
  {
    if (pw % 2 == 1)
    {
      result = (result % mod * x % mod) % mod;
    }
    x = (x % mod * x % mod) % mod;
    pw /= 2;
  }
  return result;
}
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  ll pref[n];
  pref[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    pref[i] = ((pref[i - 1] % m) + (a[i] % m)) % m;
  }
  ll ans = 0;
  for (int i = 0; i < n - 1; i++)
  {
    ans = (ans % m + ((a[i] % m) * ((pref[n - 1] % m) - (pref[i] % m) + m) % m)) % m;
  }
  ll q = (((n % m) * ((n - 1) % m) % m) * (mod_inverse(2, m) % m)) % m;
  // cout << ans << endl;
  // cout << (((ans % m) * (q % m))) % m << endl;

  ans = 0;
  for (int i = 0; i < n; ++i)
  {
    ans += a[i] * (pref[n - 1] - a[i]);
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