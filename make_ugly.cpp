#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int ans = INT_MAX;
  int cnt = 0;
  int ele = a[0];
  for (int i = 0; i < n; i++)
  {
    if (a[i] == ele)
    {
      cnt++;
    }
    else
    {
      ans = min(ans, cnt);
      cnt = 0;
    }
  }
  ans = min(ans, cnt);
  if (ans == n)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << ans << endl;
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