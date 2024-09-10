#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int x, y, m;
  cin >> x >> y >> m;
  int p1 = m / x;
  int p2 = m / y;
  ll ans = INT_MIN;
  ll t1 = p1;
  ll t2 = 0;
  while (t1 > 0 || t2 <= p2)
  {

    if (m >= (t1 * x + t2 * y))
    {
      ans = max(ans, ((t1 * x + t2 * y)));
    }
    if (t1 > 0)
    {
      t1--;
    }
    if (t2 <= p2)
    {
      t2++;
    }
  }

  cout << ans << endl;
}
int main()
{

  solve();

  return 0;
}