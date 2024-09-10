#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int ans;
  int val = INT_MIN;
  for (int i = 2; i <= n; i++)
  {
    int d = n / i;
    if (val < i * (d * (d + 1) / 2))
    {
      val = i * (d * (d + 1) / 2);
      ans = i;
    }
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