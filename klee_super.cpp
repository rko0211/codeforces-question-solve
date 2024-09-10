#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, k;
  cin >> n >> k;
  ll lo = k;
  ll hi = k + n - 1;
  ll ans = LLONG_MAX;
  ll lo1 = lo;
  ll hi1 = hi;
  ll mid = lo1 + (hi1 - lo1) / 2;
  lo1 = mid;
  while (lo1 < hi1)
  {
    ll mid = lo1 + (hi1 - lo1) / 2;
    ll prevsum = (mid * (mid + 1) / 2) - ((lo - 1) * (lo) / 2);
    ll lastsum = (hi * (hi + 1) / 2) - (mid * (mid + 1) / 2);
    cout << mid << " " << prevsum << " " << lastsum << " " << ans << endl;
    // cout << ans << endl;
    if (ans >= abs(prevsum - lastsum))
    {
      ans = abs(prevsum - lastsum);
      lo1 = mid + 1;
    }
    else
    {
      hi1 = mid - 1;
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