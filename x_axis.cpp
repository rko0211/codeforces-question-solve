#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int a[3];
  for (int i = 0; i < 3; i++)
    cin >> a[i];
  int ans = INT_MAX;
  for (int i = 1; i <= 10; i++)
  {
    ans = min(ans, (abs(i - a[0]) + abs(i - a[1]) + abs(i - a[2])));
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