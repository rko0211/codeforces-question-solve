#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, v;
  cin >> n >> v;
  int ans = min((n - 1), v);
  if (v >= (n - 1))
  {
    cout << ans << endl;
    return;
  }
  int vx = v;

  for (int i = 2; i <= n; i++)
  {
    vx--;
    ans += i;
    vx++;
    if ((n - i) <= vx)
    {
      cout << ans << endl;
      return;
    }
  }
  cout << ans << endl;
}
int main()
{

  solve();

  return 0;
}