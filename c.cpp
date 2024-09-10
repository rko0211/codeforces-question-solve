#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m, k;
  cin >> n >> m >> k;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int b[m];
  for (int j = 0; j < m; j++)
    cin >> b[j];
  sort(a, a + n);
  sort(b, b + m);
  map<int, int> m1, m2;
  for (int i = 0; i < n; i++)
  {
    if (a[i] <= k)
    {
      m1[a[i]]++;
    }
  }
  for (int i = 0; i < m; i++)
  {
    if (b[i] <= k)
    {
      m2[b[i]]++;
    }
  }
  int e1 = 0, e2 = 0;
  int t = 0;
  for (int i = 1; i <= k; i++)
  {
    if (m1[i] == 0)
    {
      if (m2[i] != 0 && e2 < (k / 2))
      {
        e2++;
      }
      else
      {
        cout << "NO\n";
        return;
      }
    }
    else if (m2[i] == 0)
    {
      if (m1[i] != 0 && e1 < (k / 2))
      {
        e1++;
      }
      else
      {
        cout << "NO\n";
        return;
      }
    }

    else
    {
      t++;
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