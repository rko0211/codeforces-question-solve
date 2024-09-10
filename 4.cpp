#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  char c[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> c[i][j];
    }
  }

  int frow = -1, lrow = -1, fcol = -1, lcol = -1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (c[i][j] == '#')
      {
        if (frow == -1)
        {
          frow = i;
        }
        if (fcol == -1)
        {
          fcol = j;
        }
        lrow = i;
        lcol = j;
      }
    }
  }

  int x = (frow + lrow) / 2;
  int y = (fcol + lcol) / 2;
  cout << (x + 1) << " " << (y + 1) << endl;
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