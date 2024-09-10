#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, k;
  cin >> n >> k;
  ll d = 2;
  ll f = 1;
  while (true)
  {
    int no_ele;
    if (n > d)
    {
      no_ele = (n / d);
      ll v = f + (no_ele - 1) * d;
      if ((v + d) <= n)
      {
        no_ele++;
      }
    }
    else
    {
      no_ele = 1;
    }
    // cout << no_ele << endl;
    // cout << f << "-> " << d << "-> " << k << endl;

    ll tk = f + (k - 1) * d;
    // cout << tk << endl;
    if (tk <= n)
    {
      cout << tk << endl;
      return;
    }
    f += f;
    d += d;
    k -= no_ele;
  }
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