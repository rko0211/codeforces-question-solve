#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  bool flag = false;
  for (int i = 1; i <= n; i++)
  {
    int a[2][2];
    for (int j = 0; j < 2; j++)
    {
      for (int k = 0; k < 2; k++)
      {
        cin >> a[j][k];
      }
    }
    if (a[1][0] == a[0][1])
    {
      flag = true;
    }
  }
  if (flag && m % 2 == 0)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
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