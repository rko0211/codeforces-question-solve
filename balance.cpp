#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{

  ll x, n;
  cin >> x >> n;
  ll sum = 1;
  ll res = LLONG_MIN;
  while (sum <= sqrt(x))
  {
    if (x % sum == 0)
    {
      if (n <= x / sum)
      {
        res = max(res, sum);
      }
      if (n <= sum)
      {
        res = max(res, x / sum);
      }
    }
    sum++;
  }

  cout << res << endl;
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