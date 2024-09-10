#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  if ((n * m) == 1)
  {
    cout << -1 << endl;
    return;
  }
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < m - 1; j++)
  //   {
  //     swap(a[i][j], a[i][j + 1]);
  //   }
  // }

  // for (int j = 0; j < m; j++)
  // {
  //   for (int i = 0; i < n - 1; i++)
  //   {
  //     swap(a[i][j], a[i + 1][j]);
  //   }
  // }

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < m; j++)
  //   {
  //     cout << a[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  // cout << endl;

  for (int i = n - 1; i >= 0; i--)
  {
    swap(a[i][0], a[i][m / 2]);

    for (int j = m - 1; j >= 0; j--)
    {
      if (n % 2 == 1)
      {
        swap(a[0][j], a[n / 2][j]);
      }
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  // cout << endl;
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