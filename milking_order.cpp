#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m, k;
  cin >> n >> m >> k;
  int a[m];
  unordered_map<int, int> um;
  for (int i = 0; i < m; i++)
  {
    cin >> a[i];
  }
  int ans[n] = {0};
  int loind = 0;
  for (int i = 0; i < k; i++)
  {
    int c, p;
    cin >> c >> p;
    ans[p - 1] = c;
    um[c] = p - 1;
    if (p - 1 >= loind)
    {
      loind++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (um.find(a[i]) != um.end())
    {
      int ind = um[a[i]] - 1;
      int x = i - 1;
      for (int j = ind; j >= 0 && x >= 0; j--)
      {
        if (ans[j] == 0)
        {
          ans[j] = a[x--];
        }
        if (j <= loind)
        {
          loind = ind + 1;
        }
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
  cout << (loind + 2) << endl;
}
int main()
{

  solve();

  return 0;
}