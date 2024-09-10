#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n, m;
  cin >> n >> m;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  map<ll, bool> mp;
  ll maxi = 0;
  for (int i = 0; i < n; i++)
  {
    mp[a[i]] = true;
    maxi = max(maxi, a[i]);
  }

  while (m--)
  {
    char c;
    ll l, r;
    cin >> c >> l >> r;

    if (c == '+')
    {
      if (maxi <= r && l <= maxi)
      {
        mp[maxi] = false;
        maxi++;
        mp[maxi] = true;
        cout << maxi << " ";
      }
      else
      {
        cout << maxi << " ";
      }
    }
    else
    {
      // c=='-'

      if (maxi <= r && l <= maxi)
      {
        mp[maxi] = false;
        ll t = maxi;
        maxi--;
        mp[maxi] = true;
        ll ans;
        if (mp[t])
        {
          ans = t;
        }
        else
        {
          ans = maxi;
        }
        cout << ans << " ";
      }
      else
      {
        cout << maxi << " ";
      }
    }
  }
  cout << endl;
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