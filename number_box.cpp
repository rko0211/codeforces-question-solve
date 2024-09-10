#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int m, n;
  cin >> m >> n;
  vector<vector<int>> a(m, vector<int>(n));
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> a[i][j];
    }
  }
  int ans = 0;
  int mini = INT_MAX;
  int neg = 0;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (a[i][j] < 0)
      {
        neg++;
      }
      mini = min(mini, abs(a[i][j]));
      ans += abs(a[i][j]);
    }
  }
  ans -= mini;
  if (neg % 2 == 1)
  {
    ans -= mini;
  }
  else
  {
    ans += mini;
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