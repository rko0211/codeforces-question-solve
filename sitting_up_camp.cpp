#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll a, b, c;
  cin >> a >> b >> c;
  ll ans = 0;
  ans += a;
  ans += (b / 3);
  b %= 3;
  // cout << "---->" << b << endl;
  if ((b + c) >= 3)
  {

    int req = abs(3 - b);
    if (req <= c)
    {
      ans++;
      c -= req;
      b = 0;
    }
    else
    {
      cout << -1 << endl;
      return;
    }
  }
  if (b != 0)
  {
    cout << -1 << endl;
    return;
  }
  ans += (c / 3);
  if (c % 3 != 0)
  {
    ans++;
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