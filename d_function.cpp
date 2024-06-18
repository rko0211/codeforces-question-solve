#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;

ll power(ll b, ll p)
{
  if (p == 0)
    return 1;
  if ((p & 1))
    return ((b % M) * power(b, p - 1)) % M;
  return power((b * b) % M, p / 2) % M;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--)
  {
    int l, r, k;
    cin >> l >> r >> k;
    if (k >= 10)
    {
      cout << "0\n";
      continue;
    }

    ll ans = (power((9 / k) + 1, r) - power((9 / k) + 1, l) + M) % M;
    cout << ans << '\n';
  }
  return 0;
}