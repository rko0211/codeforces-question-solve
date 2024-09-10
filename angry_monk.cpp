#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, k;
  cin >> n >> k;
  int a[k];
  for (int i = 0; i < k; i++)
    cin >> a[i];
  sort(a, a + k);
  long long ans = 0;
  for (int i = 0; i < k - 1; i++)
  {
    ans += (2 * a[i] - 1);
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