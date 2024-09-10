#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{

  ll n;
  cin >> n;
  ll x[n];
  ll y[n];
  for (int i = 0; i < n; i++)
    cin >> x[i];
  for (int j = 0; j < n; j++)
    cin >> y[j];
  ll ans = LLONG_MIN;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      ll dx = (x[i] - x[j]);
      ll dy = (y[i] - y[j]);
      ans = max(ans, (dx * dx + (dy * dy)));
    }
  }
  cout << ans << endl;
}
int main()
{

  solve();

  return 0;
}