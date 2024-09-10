// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  ll n;
  cin >> n;
  ll lo = 1;
  ll hi = 1000000000;
  while (lo <= hi)
  {
    ll mid = (lo + (hi - lo) / 2);
    ll v1 = mid / 15;
    ll v2 = mid / 3;
    v2 -= v1;
    ll v3 = mid / 5;
    v3 -= v1;
    ll val = (v1 + v2 + v3);
    if ((mid - val) == n)
    {
      cout << mid << endl;
      break;
    }
    else if ((mid - val) > n)
    {
      hi = mid - 1;
    }
    else
    {
      lo = mid + 1;
    }
  }
}
