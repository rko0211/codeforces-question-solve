#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll l, r;
  cin >> l >> r;

  int val = 1;
  int i = l;
  int ans = 0;
  while (i <= r)
  {
    ans++;
    i += val;
    val++;
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