#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < m; j++)
    {
      a[i][j] = (s[j] - '0');
    }
  }

  int b[n][m];
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < m; j++)
    {
      b[i][j] = (s[j] - '0');
    }
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < m - 1; j++)
    {
      if (a[i][j] == b[i][j])
      {
        continue;
      }
      if (a[i][j] > b[i][j])
      {
        if (((3 - a[i][j]) + b[i][j]) == 2)
        {
          a[i][m - 1] = (a[i][m - 1] + 1) % 3;
          a[n - 1][j] = (a[n - 1][j] + 1) % 3;
        }
        else
        {
          a[i][m - 1] = (a[i][m - 1] + 2) % 3;
          a[n - 1][j] = (a[n - 1][j] + 2) % 3;
        }
        int t = a[i][j];
        a[i][j] = (((3 - a[i][j] + b[i][j]) + a[i][j]) % 3);
        a[n - 1][m - 1] = (((3 - t + b[i][j]) + a[n - 1][m - 1]) % 3);
      }
      else
      {
        // <
        if ((b[i][j] - a[i][j]) == 2)
        {
          a[i][m - 1] = (a[i][m - 1] + 1) % 3;
          a[n - 1][j] = (a[n - 1][j] + 1) % 3;
        }
        else
        {
          a[i][m - 1] = (a[i][m - 1] + 2) % 3;
          a[n - 1][j] = (a[n - 1][j] + 2) % 3;
        }
        int t = a[i][j];
        a[i][j] = (((b[i][j] - a[i][j]) + a[i][j]) % 3);
        a[n - 1][m - 1] = (((b[i][j] - t) + a[n - 1][m - 1]) % 3);
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] != b[i][j])
      {
        cout << "NO\n";
        return;
      }
    }
  }
  cout << "YES\n";
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