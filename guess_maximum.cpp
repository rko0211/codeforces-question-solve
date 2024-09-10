#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int mini = INT_MAX;
  int ans = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    mini = min(a[i], mini);
  }

  for (int i = 0; i < n; i++)
  {
    // if (a[i] == mini)
    // {
    int m1 = INT_MAX;
    int m2 = INT_MAX;
    if ((i - 1) >= 0)
    {
      m1 = max(a[i], a[i - 1]);
    }
    if ((i + 1) < n)
    {
      m2 = max(a[i], a[i + 1]);
    }
    ans = min(ans, min(m1, m2) - 1);
    // }
  }
  cout << ans << endl;
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