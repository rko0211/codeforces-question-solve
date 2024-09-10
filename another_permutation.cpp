#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++)
  {

    if (i == n - 1)
    {
      ans += (i * n);
    }
    else if (i == n)
    {
      continue;
    }
    else
    {
      ans += (i * i);
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