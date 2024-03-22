#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1000000007;
void solve()
{
  int n, k;
  cin >> n >> k;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  ll maxsum = 0;
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += a[i];
    maxsum = max(maxsum, sum);
    if (sum < 0)
    {
      sum = 0;
    }
  }
  // cout << maxsum << endl;
  ll ans = 0;

  while (k--)
  {
    ans = (ans + maxsum) % mod;
    maxsum = (2 * maxsum) % mod;
  }
  // cout << ans << endl;
  for (int i = 0; i < n; i++)
  {
    ans += a[i];
  }
  ll res = (ans % mod);
  if (res < 0)
  {
    res += 1000000007;
  }
  cout << res << endl;
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