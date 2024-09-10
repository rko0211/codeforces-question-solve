#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  int x = 2 * n;
  char a[x][m];
  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  int ans = 0;
  for (int col = 0; col < m; col++)
  {
    bool A = false, C = false, G = false, T = false;
    for (int row = 0; row < n; row++)
    {
      if (a[row][col] == 'A')
      {
        A = true;
      }
      else if (a[row][col] == 'C')
      {
        C = true;
      }
      else if (a[row][col] == 'G')
      {
        G = true;
      }
      else
      {
        T = true;
      }
    }
    for (int col1 = 0; col1 < m; col1++)
    {
      bool flag = false;
      for (int row1 = n; row1 < x; row1++)
      {
        if (a[row1][col1] == 'A')
        {
          if (A == true)
          {
            flag = true;
            break;
          }
        }
        else if (a[row1][col1] == 'C')
        {
          if (C == true)
          {
            flag = true;
            break;
          }
        }
        else if (a[row1][col1] == 'G')
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
  }

  cout << ans << endl;
}

int main()
{

  solve();

  return 0;
}