#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  if (n == m)
  {
    if (n == 1)
    {
      cout << 0 << endl;
      return;
    }
  }
  if (min(n, m) == 1)
  {
    cout << 1 << endl;
  }
  else
  {
    cout << 2 << endl;
  }
  // cout << min(n, m) << endl;
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