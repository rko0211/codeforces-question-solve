#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, k;
  cin >> n >> k;
  if (n > k)
  {
    cout << k << endl;
  }
  else
  {
    ll ans;
    ll x = k;
    ll lo = k;
    ll hi = 1e12;
    while (lo <= hi)
    {
      ll mid = (lo + (hi - lo) / 2);
      if ((mid - (mid / n)) == k)
      {
        ans = mid;
        hi = mid - 1;
      }
      else if ((mid - (mid / n)) > k)
      {
        hi = mid - 1;
      }
      else
      {
        lo = mid + 1;
      }
    }

    // while (1)
    // {
    //   if (x - (x / n) == k)
    //   {
    //     ans = x;
    //     break;
    //   }
    //   x++;
    // }

    cout << ans << endl;
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