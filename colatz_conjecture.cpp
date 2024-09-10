#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> multiples;
void solve()
{
  ll x, y, k;
  cin >> x >> y >> k;
  while (k > 0 && x != 1)
  {
    ll dif = (x / y + 1) * y - x;
    dif = max(1ll, dif);
    ll mini = min(dif, k);
    k -= mini;
    x += mini;
    while ((x % y) == 0)
    {
      x /= y;
    }
  }

  cout << x + k % (y - 1) << endl;
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