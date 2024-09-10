#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, k, x;
  cin >> n >> k >> x;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a, a + n);
  reverse(a, a + n);

  int pref[n];
  pref[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    pref[i] = (pref[i - 1] + a[i]);
  }
  int total = pref[n - 1];
  int ans = INT_MIN;
  for (int i = 0; i < k; i++)
  {
    ans = max(ans, total - 2 * pref[min(i + x, n - 1)] + pref[i]);
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