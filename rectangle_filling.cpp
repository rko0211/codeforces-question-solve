#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  char a[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  if (a[0][0] == a[n - 1][m - 1])
  {
    cout << "YES\n";
    return;
  }
  if ((n == 1 && m > 1) || (m == 1 && n > 1))
  {
    if (a[0][0] == a[n - 1][m - 1])
    {
      cout << "YES\n";
      return;
    }
    else
    {
      cout << "NO\n";
      return;
    }
  }

  int w1 = 0;
  int b1 = 0;
  for (int i = 0; i < m; i++)
  {
    if (a[0][i] == 'W')
    {
      w1++;
    }
    else
      b1++;
  }
  int w2 = 0;
  int b2 = 0;
  for (int i = 0; i < m; i++)
  {
    if (a[n - 1][i] == 'W')
    {
      w2++;
    }
    else
      b2++;
  }

  // cout << w1 << " " << b1 << " " << w2 << " " << b2 << endl;
  // cout << (w1 & b1) << " " << (w2 & b2) << endl;
  if ((w1 == 0 || b1 == 0) && (w2 == 0 || b2 == 0))
  {
    // cout << "h\n";
    if (a[0][0] != a[n - 1][m - 1])
    {
      cout << "NO\n";
      return;
    }
  }

  w1 = 0;
  b1 = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i][0] == 'W')
    {
      w1++;
    }
    else
      b1++;
  }
  w2 = 0;
  b2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i][m - 1] == 'W')
    {
      w2++;
    }
    else
      b2++;
  }
  // cout << w1 << " " << b1 << " " << w2 << " " << b2 << endl;
  if ((w1 == 0 || b1 == 0) && (w2 == 0 || b2 == 0))
  {
    if (a[0][0] != a[n - 1][m - 1])
    {
      cout << "NO\n";
      return;
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