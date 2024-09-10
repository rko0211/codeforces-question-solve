#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll x, y, k;
  cin >> x >> y >> k;

  while (k > 0)
  {
    // x++;
    cout << x << " ";
    ll v1 = x / y;
    ll r1 = x % y;

    ll dif = ((v1 + r1) * y) - (x - 1);

    if ((k - dif) >= 0)
    {
      k -= dif;
      x = (v1 + r1);
    }
    else
    {
      x++;
      // break;
      k--;
    }
  }
  cout << x << endl;
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