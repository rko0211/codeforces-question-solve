#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int val = INT_MIN;
  int x;
  cin >> x;
  int ans;
  for (int i = 1; i < x; i++)
  {
    if (val < ((__gcd(x, i) + i)))
    {
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