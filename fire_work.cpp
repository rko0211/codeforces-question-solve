#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll a, b, m;
  cin >> a >> b >> m;
  ll val = 2 * m + 1;
  ll val1 = val - m;
  ll ans1 = (val1) / a;
  if (val1 % a != 0)
  {
    ans1++;
  }
  ll ans2 = val1 / b;
  if (val1 % b != 0)
  {
    ans2++;
  }
  cout << (ans1 + ans2) << endl;
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