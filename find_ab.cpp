#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n, q;
  cin >> n >> q;
  ll c[n];
  for (int i = 0; i < n; i++)
    cin >> c[i];
  ll pref_sum[n];
  pref_sum[0] = c[0];
  for (int i = 1; i < n; i++)
  {
    pref_sum[i] = (pref_sum[i - 1] + c[i]);
  }

  int cnt1[n] = {0};

  int cnt = 0;

  for (int i = 0; i < n; i++)
  {

    if (c[i] == 1)
    {
      cnt++;
    }
    cnt1[i] = cnt;
  }

  while (q--)
  {
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    int onecnt = cnt1[r];
    if (l > 0)
    {
      onecnt -= cnt1[l - 1];
    }
    ll sum = pref_sum[r];
    if (l > 0)
    {
      sum -= pref_sum[l - 1];
    }
    sum -= (r - l + 1);
    if (onecnt == 0)
    {
      if (l == r)
      {
        cout << "NO\n";
      }
      else
      {
        cout << "YES\n";
      }
    }
    else
    {
      if (sum >= onecnt)
      {
        cout << "YES\n";
      }
      else
      {
        cout << "NO\n";
      }
    }
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