#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{

  ll a, b;
  cin >> a >> b;

  if (a == b)
  {
    cout << 2 << endl;
    return;
  }
  int ans = INT_MAX;
  int cnt = 0;
  for (int i = 0; i * i <= a; i++)
  {
    if (b == 1 && i == 0)
    {
      continue;
    }
    ll c = a;
    cnt = i;
    while (c > 0)
    {
      c /= (b + i);
      cnt++;
    }
    ans = min(ans, cnt);
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