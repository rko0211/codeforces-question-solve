#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, k;
  cin >> n >> k;

  char a[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> a[i][j];
    }
  }
  // cout << "jH\n";
  int d = n / k;
  int ans[d][d];
  int lr = 0, lc = 0;
  int hr = k - 1, hc = k - 1;
  int r = 0;
  int c = 0;
  for (int i = 0; i < n; i += k)
  {
    lr = i;
    hr = (k - 1 + i);
    c = 0;
    for (int j = 0; j < n; j += k)
    {
      lc = j;
      hc = (k - 1 + j);
      // cout << lr << " " << lc << " " << hr << " " << hc << "| ";
      ans[r][c] = (a[lr][lc] == '1') ? 1 : 0;
      c++;
    }
    // cout << endl;
    r++;
  }

  for (int i = 0; i < d; i++)
  {
    for (int j = 0; j < d; j++)
    {
      cout << ans[i][j];
    }
    cout << endl;
  }
}
int main()
{
  // your code goes here

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
