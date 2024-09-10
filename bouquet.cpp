#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, m;
  cin >> n >> m;
  ll a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  ll ans = 0;
  ll sum = 0;
  int st = 0;
  sort(a, a + n);
  for (int i = 0; i < n; i++)
  {
    sum += a[i];
    while (sum > m || (st < n && (a[i] - a[st]) > 1))
    {
      sum -= a[st];
      st++;
    }
    ans = max(ans, sum);
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