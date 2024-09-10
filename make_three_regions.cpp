#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  char a[2][n];
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> a[i][j];
    }
  }

  int ans = 0;
  for (int i = 0; i < 2; i++)
  {

    for (int j = 0; j < n; j++)
    {
      int cnt = 0;
      if (a[i][j] == '.')
      {
        if (i == 0)
        {
          if ((j - 1) >= 0 && a[i][j - 1] == '.')
          {
            cnt++;
          }
          if ((j + 1) < n && a[i][j + 1] == '.')
          {
            cnt++;
          }
          if ((j - 1) >= 0 && (j + 1) < n && a[1][j - 1] == 'x' && a[1][j + 1] == 'x' && a[1][j] == '.')
          {
            cnt++;
          }

          if (cnt == 3)
          {
            ans++;
          }
        }
        else
        {
          if ((j - 1) >= 0 && a[i][j - 1] == '.')
          {
            cnt++;
          }
          if ((j + 1) < n && a[i][j + 1] == '.')
          {
            cnt++;
          }
          if ((j - 1) >= 0 && (j + 1) < n && a[0][j - 1] == 'x' && a[0][j + 1] == 'x' && a[0][j] == '.')
          {
            cnt++;
          }

          if (cnt == 3)
          {
            ans++;
          }
        }
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