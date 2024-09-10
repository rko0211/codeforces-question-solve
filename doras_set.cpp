#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int l, r;
  cin >> l >> r;

  int ans = 0;
  int f = l;
  if (f % 2 == 0)
  {
    f++;
  }
  int last = f + 2;
  while (last <= r)
  {
    ans++;
    f += 4;
    last += 4;
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