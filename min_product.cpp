#include <bits/stdc++.h>
using namespace std;
void solve()
{
  long long int a, b, x, y, n;
  cin >> a >> b >> x >> y >> n;
  long long int rem = 0;
  long long int aa, bb;
  aa = max(x, (a - n));
  int dif = a - aa;
  rem = (n - dif);
  bb = max(y, (b - rem));
  long long ans = aa * bb;

  bb = max(y, (b - n));
  dif = b - bb;
  rem = (n - dif);
  aa = max(x, (a - rem));
  ans = min(ans, (aa * bb));
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