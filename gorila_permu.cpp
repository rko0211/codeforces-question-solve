#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m, k;
  cin >> n >> m >> k;
  int a[n];
  int x = 0;
  int i = max(k, n);
  int cnt = (n - m);
  while (cnt > 0)
  {
    a[x] = i;
    i--;
    x++;
    cnt--;
  }
  for (int i = 1; i <= m; i++)
  {
    a[x] = i;
    x++;
  }

  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
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