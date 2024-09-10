#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  long a[m];
  for (int i = 0; i < m; i++)
    cin >> a[i];

  long b[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> b[i][j];
    }
  }

  long ans[m];

  for (int i = 0; i < m; i++)
  {
    long sum = 0;
    for (int j = 0; j < n; j++)
    {
      sum += b[j][i];
    }

    ans[i] = sum;
  }
  for (int i = 0; i < m; i++)
  {
    if (a[i] > ans[i])
    {
      cout << "No\n";
      return;
    }
  }
  cout << "Yes\n";
}
int main()
{

  solve();

  return 0;
}