#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int x, y;
  cin >> x >> y;
  int ans = 0;
  int i = 1;
  int j = 1;
  while (x > 0 || y > 0)
  {
    if (y >= 2)
    {

      ans++;
      x -= 7;
      y -= 2;
    }
    else if (y == 1)
    {
      ans++;

      x -= 11;
      y -= 1;
    }
    else
    {
      if (x > 0)
      {
        ans++;
        x -= 15;
      }
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