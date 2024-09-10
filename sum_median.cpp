#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n, k;
  cin >> n >> k;
  int sz = n * k;
  ll a[sz];
  for (int i = 0; i < sz; i++)
    cin >> a[i];
  ll ans = 0;
  if (n <= 2)
  {
    int i = 0;
    for (i = 0; i < sz; i += n)
    {
      ans += a[i];
    }
    cout << ans << endl;
    return;
  }

  int mid = n / 2;
  int inc_lo = 0;
  int dec_hi = 0;
  if (n % 2 != 0)
  {
    mid++;
    dec_hi = mid;
    inc_lo = (n - mid);
  }
  else
  {
    dec_hi = (mid + 1);
    inc_lo = (n - mid - 1);
  }
  int hi = (sz - dec_hi);
  int lo = inc_lo - 1;
  // cout << lo << " " << hi << endl;

  while (lo < hi)
  {
    ans += a[hi];
    lo += inc_lo;
    hi -= dec_hi;
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