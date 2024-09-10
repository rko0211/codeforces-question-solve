#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll x, y, k;
  cin >> x >> y >> k;
  ll xdir = x / k;
  if ((x % k) != 0)
  {
    xdir++;
  }

  ll ydir = y / k;
  if ((y % k) != 0)
  {
    ydir++;
  }
  ll ans = 0;
  // cout << xdir << " " << ydir << endl;
  ans = (xdir);
  ans += ydir;
  if (y < x)
  {
    ans += (xdir - (ydir)-1);
  }
  else
  {
    ans += (ydir - (xdir - 1) - 1);
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