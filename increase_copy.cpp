#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n;
  cin >> n;
  ll ans = LLONG_MAX;

  int x = 1;
  for (int i = 1; i * i <= n; i++)
  {

    x = i;

    ans = min(ans, x - 1 + ((n - x) + x - 1) / x);
  }
  // cout << div << endl;
  if (ans == LLONG_MAX)
  {
    ans = 0;
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