#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 100000000;
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  ll pref[n];
  pref[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    pref[i] = (pref[i - 1] + a[i]);
  }
  ll res = 0;
  ll sum = 0;
  ll sum1 = 0;
  ll sum2 = 0;
  int i;
  for (i = 0; i < 2; i++)
  {
    ll sum = 0;
    for (int j = i + 1; j < n; j++)
    {
      ll val = (a[i] + a[j]) % mod;
      sum += val;
      res += val;
    }
    // cout << sum << " ";
    if (sum1 == 0)
    {
      sum1 = sum;
    }
    else if (sum2 == 0)
    {
      sum2 = sum;
    }
  }

  ll dif = abs(sum1 - sum2);
  ll mini = min(sum1, sum2);
  for (i = 2; i < n - 1; i++)
  {
    res += (mini - dif);
    mini = (mini - dif);
  }
  cout << res << endl;
}
int main()
{

  solve();

  return 0;
}