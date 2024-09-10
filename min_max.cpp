#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int ans = 0;
  sort(a, a + n);
  ans += abs(a[n - 1] - a[0]);
  ans += abs(a[0] - a[n - 2]);
  ans += abs(a[n - 2] - a[1]);
  ans += abs(a[1] - a[n - 1]);
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