#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, k, h;
  cin >> n >> k >> h;
  ll ans = 0;
  for (int i = 1; i <= n; i++)
  {
    if (i >= h)
    {
      ans += n;
    }
    else
    {
      ll val = (k * i - h) / (k - 1);
      if (val <= 0)
        continue;
      ans += val;
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