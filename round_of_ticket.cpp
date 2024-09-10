// #include <bits/stdc++.h>

#include <algorithm>
#include <iostream>

using namespace std;
void solve()
{
  int n, m, k;
  cin >> n >> m >> k;

  int b[n];
  for (int i = 0; i < n; i++)
    cin >> b[i];
  int c[m];
  for (int i = 0; i < m; i++)
    cin >> c[i];

  sort(b, b + n);
  sort(c, c + m);

  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (b[i] + c[j] <= k)
      {
        cnt++;
      }
    }
  }
  cout << cnt << endl;
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