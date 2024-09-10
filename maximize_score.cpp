#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int s = 2 * n;
  int a[s];
  for (int i = 0; i < s; i++)
    cin >> a[i];

  sort(a, a + s);
  int ans = 0;
  for (int i = 0; i < s; i += 2)
  {
    // cout << a[i] << " ";
    ans += a[i];
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