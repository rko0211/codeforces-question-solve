#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, m, k;
  cin >> n >> m >> k;
  ll a[n];
  ll mini = LLONG_MAX;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    mini = min(mini, a[i]);
  }

  if (m >= k)
  {
    cout << (mini * (k)) << endl;
  }
  else
  {
    // k>m
    ll days = (k / m) + (k % m != 0);
    sort(a, a + n);
    // reverse(a, a + n);
    int ind = abs(n - days);
    ll ans = 0;
    ll val = 0;
    for (int i = 0; i < n && k != 0; i++)
    {
      if (k == 0)
      {
        break;
      }
      // if (k % m == 1)
      // {
      //   ans += (a[i] + val) * 1;
      //   k--;
      //   val += 1;
      // }
      // else
      // {
      ans += ((a[i] + val) * min(m, k));
      val += min(m, k);
      k -= min(m, k);

      // }
    }

    cout << ans << endl;
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