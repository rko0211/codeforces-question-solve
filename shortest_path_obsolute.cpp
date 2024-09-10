#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int xa, ya, xb, yb, xf, yf;
  // string s;
  // cin >> s;
  cin >> xa >> ya;
  cin >> xb >> yb;
  cin >> xf >> yf;
  int ans = abs(xa - xb) + abs(ya - yb);
  if (xf == xa && xf == xb)
  {
    if (min(ya, yb) < yf && max(ya, yb) > yf)
    {
      ans += 2;
    }
  }
  if (yf == ya && yf == yb)
  {
    if (min(xa, xb) < xf && max(xa, xb) > xf)
    {
      ans += 2;
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