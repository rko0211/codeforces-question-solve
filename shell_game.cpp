#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int ans = 0;
  while (n > 0)
  {
    int a, b, g;
    cin >> a >> b >> g;
    if (g == a || g == b)
    {
      ans++;
    }
    n--;
  }
  cout << ans << endl;
}
int main()
{

  solve();
  return 0;
}