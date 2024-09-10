#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  vector<vector<int>> b(n, vector<int>(m));

  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
      cin >> a[i][j];

  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
      cin >> b[i][j];

  unordered_map<int, pair<int, int>> mp1, mp2;

  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
    {
      mp1[a[i][j]] = {i, j};
      mp2[b[i][j]] = {i, j};
    }

  for (int i = 1; i <= n * m; ++i)
  {
    int row = mp1[i].first;
    int col = mp1[i].second;

    for (int j = 0; j < m; ++j)
    {
      if (j != col && mp2[i].first != mp2[a[row][j]].first)
      {
        cout << "NO\n";
        return;
      }
    }

    for (int j = 0; j < n; ++j)
    {
      if (j != row && mp2[i].second != mp2[a[j][col]].second)
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
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
