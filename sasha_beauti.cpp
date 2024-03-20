#include <bits/stdc++.h>
using namespace std;
#define ll long int
void solve()
{
  ll n;
  cin >> n;

  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a, a + n);
  ll ans = 0;
  for (int i = 1; i < n; i++)
  {
    ans += (a[i] - a[i - 1]);
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