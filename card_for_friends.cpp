#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll w, h, n;
  cin >> w >> h >> n;
  ll ans = 1;
  ll v = 1;
  while (w % 2 == 0 || h % 2 == 0)
  {
    ans = (v * 2);
    v *= 2;
    if (w % 2 == 0)
    {
      w /= 2;
    }
    else if (h % 2 == 0)
    {
      h /= 2;
    }
  }
  if (ans >= n)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
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