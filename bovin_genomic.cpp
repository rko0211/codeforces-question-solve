#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  char a[2 * n][m];
  for (int i = 0; i < (2 * n); i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  int ans = 0;
  for (int i = 0; i < m; i++)
  {
    bool A = false, C = false, G = false, T = false;
    for (int row = 0; row < n; row++)
    {
      if (a[row][i] == 'A')
      {
        A = true;
      }
      else if (a[row][i] == 'C')
      {
        C = true;
      }
      else if (a[row][i] == 'G')
      {
        G = true;
      }
      else
      {
        T = true;
      }
    }
    bool flag = false;
    for (int row = n; row < (2 * n); row++)
    {
      if (a[row][i] == 'A')
      {
        if (A == true)
        {
          flag = true;
          break;
        }
      }
      else if (a[row][i] == 'C')
      {
        if (C == true)
        {
          flag = true;
          break;
        }
      }
      else if (a[row][i] == 'G')
      {
        if (G == true)
        {
          flag = true;
          break;
        }
      }
      else
      {
        if (T == true)
        {
          flag = true;
          break;
        }
      }
    }
    if (!flag)
    {
      ans++;
    }
  }
  cout << ans << endl;
}
int main()
{

  solve();

  return 0;
}