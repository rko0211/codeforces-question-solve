#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int k, n, m;
  cin >> k >> n >> m;
  int a[n];
  vector<int> zero;
  vector<int> nonzero;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int b[m];
  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
  }

  int z1 = 0;
  int o1 = 0;
  int mini = k;
  vector<int> ans;
  while (z1 < n || o1 < m)
  {
    if (z1 < n && (a[z1] == 0 || a[z1] <= mini))
    {
      ans.push_back(a[z1]);

      if (a[z1] == 0)
        mini++;
      z1++;
    }
    else if (o1 < m && (b[o1] == 0 || b[o1] <= mini))
    {
      ans.push_back(b[o1]);

      if (b[o1] == 0)
        mini++;
      o1++;
    }
    else
    {
      cout << -1 << endl;
      return;
    }
  }
  for (auto &it : ans)
  {
    cout << it << " ";
  }
  cout << endl;
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