#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, k;
  cin >> n >> k;
  int ans = 1;
  n--;
  ans += (k * n);
  cout << ans << endl;
}
int main()
{

  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}