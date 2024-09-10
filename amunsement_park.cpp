#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, k;
  cin >> n >> k;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int ans = 0;
  int val = k;
  for (int i = 0; i < n; i++)
  {
    if (val >= a[i])
    {
      val -= a[i];
    }
    else
    {
      ans++;
      val = k;
      val -= a[i];
    }
    // cout << ans << " ";
  }
  // cout << endl;
  cout << (ans + 1) << endl;
}
int main()
{
  solve();

  return 0;
}