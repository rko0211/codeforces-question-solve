#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n, k;
  cin >> n >> k;
  ll total_diag = 4 * n - 2;
  ll total_cell = (n * 2);
  ll ans = (total_cell * k / total_diag);
  if (2 * ans < k)
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