#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n;
  cin >> n;
  int cnt = 0;
  for (int i = 64; i >= 0; i--)
  {
    ll val = pow(2LL, i);
    if (val <= n)
    {
      n -= val;
      cnt++;
    }
  }
  if (n == 0)
  {
    cout << cnt << endl;
  }
  else
  {
    cout << -1 << endl;
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