#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, a, b;
  cin >> n >> a >> b;
  if (a >= b)
  {
    cout << (n * a) << endl;
    return;
  }
  ll i = (b + 1) - (a - 1);
  ll sum = b * (b + 1) / 2;

  ll sub = (b - min((i - 1), (n)));
  ll red = 0;
  red = sub * (sub + 1) / 2;
  ll v1 = (sum - red);
  ll extr = 0;
  if (n >= (i - 1))
    extr = (n - (i - 1));
  cout << (v1 + (extr * a)) << endl;
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