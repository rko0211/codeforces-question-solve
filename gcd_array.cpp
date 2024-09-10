#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int l, r, k;
  cin >> l >> r >> k;
  int d = (r - l + 1);
  int even;
  int odd;
  if (d == 1)
  {
    if (l != 1)
      cout << "YES\n";
    else
      cout << "NO\n";
    return;
  }
  if (l % 2 == 1 && r % 2 == 1)
  {
    even = d / 2;
    odd = d - even;
  }
  else
  {
    odd = d / 2;
    even = d - odd;
  }
  if (k >= odd)
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