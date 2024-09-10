#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < m; j++)
    {
      int mini = INT_MAX;
      int maxi = INT_MIN;
      if ((i - 1) >= 0)
      {
        mini = min(mini, a[i - 1][j]);
        maxi = max(maxi, a[i - 1][j]);
      }
      if ((i + 1) < n)
      {
        mini = min(mini, a[i + 1][j]);
        maxi = max(maxi, a[i + 1][j]);
      }

      if ((j - 1) >= 0)
      {
        mini = min(mini, a[i][j - 1]);
        maxi = max(maxi, a[i][j - 1]);
      }
      if ((j + 1) < m)
      {
        mini = min(mini, a[i][j + 1]);
        maxi = max(maxi, a[i][j + 1]);
      }

      if (a[i][j] > maxi)
      {
        a[i][j] = maxi;
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
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