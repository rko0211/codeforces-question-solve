#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, k;
  cin >> n >> k;
  int ans = (n - 1) / (k - 1);
  if ((n - 1) % (k - 1) != 0)
  {
    ans++;
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