#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, k;
  cin >> n >> k;
  int a[n], b[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int j = 0; j < n; j++)
    cin >> b[j];

  int ans = INT_MIN;
  int maxi = INT_MIN;
  int s = 0;
  for (int i = 0; i < min(n, k); i++)
  {
    maxi = max(maxi, b[i]);
    s += a[i];
    ans = max(ans, (s + maxi * (k - i - 1)));
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