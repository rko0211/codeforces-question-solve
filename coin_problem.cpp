#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n;
  cin >> n;
  int res = INT_MAX;
  int coins[] = {1, 3, 6, 10, 15};
  for (int i = 0; i < 5; i++)
  {
    int ans = 0;
    ll v = n;
    ans += v / coins[i];
    // cout << v / coins[i] << " ";
    v %= coins[i];
    for (int j = 0; j < 5; j++)
    {
      if (j == i)
        continue;
      if (v > 0)
      {
        ll v1 = v;
        ans += v1 / coins[j];
        // cout << v / coins[j] << " ";
        v1 %= coins[j];

        for (int k = 0; k < 5; k++)
        {

          if (k == j || k == i)
            continue;
          if (v1 > 0)
          {
            ll v2 = v1;
            ans += v2 / coins[k];
            // cout << v / coins[k] << " ";
            v2 %= coins[k];

            for (int p = 0; p < 5; p++)
            {
              if (p == k || p == j || p == i)
                continue;
              if (v2 > 0)
              {
                ll v3 = v2;
                ans += v3 / coins[p];
                // cout << v / coins[p] << " ";
                v3 %= coins[p];

                for (int q = 0; q < 5; q++)
                {
                  if (q == p || q == k || q == j || q == i)
                    continue;
                  if (v3 > 0)
                  {
                    ll v4 = v3;
                    ans += v4 / coins[q];
                    // cout << v / coins[q] << " ";
                    v4 %= coins[q];
                  }
                }
              }
            }
          }
        }
      }
    }
    res = min(res, ans);
    // cout << endl;
    // cout << ans << " " << res << endl;
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