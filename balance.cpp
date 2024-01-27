#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{

  ll x, n;
  cin >> x >> n;
  ll sum = 1;
  ll res;
  while ((sum * n) <= (x))
  {
    if ((x - (sum * n)) % sum == 0)
    {
      res = sum;
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