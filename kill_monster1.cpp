#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, x, k;
  cin >> n >> x >> k;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a, a + n);
  ll ans1 = 0, ans2 = 0;
  ll val1 = k * x;
  ll val2 = x;
  bool flag = false;
  for (int i = n - 1; i >= 0; i--)
  {
    if (val1 > a[i])
    {
      val1 = a[i];
      ans1++;
    }
    if (val2 > a[i])
    {
      val2 = a[i];
      ans2++;
    }
    else
    {
      if (!flag)
      {
        val2 *= k;
        flag = true;
      }
      if (val2 > a[i])
      {
        val2 = a[i];
        ans2++;
      }
    }
  }
  ll ans3 = 0;
  ll val = 0;
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i + 1] != a[i])
    {
      if (a[i + 1] < (k * x) || a[i + 1] < x)
      {
        val++;
      }
      else
      {
        if (a[i] < (k * x) || a[i] < x)
        {
          val++;
        }
        ans3 = max(ans3, val);
        val = 0;
      }
    }
    else
    {
      if (a[i] < (k * x) || a[i] < x)
      {
        val = 1;
      }
      ans3 = max(ans3, val);
      val = 0;
    }
  }
  if (a[n - 1] < (k * x) || a[n - 1] < x)
  {
    val++;
  }
  ans3 = max(ans3, val);
  // cout << ans1 << " " << ans2 << " " << ans3 << endl;
  cout << max({ans1, ans2, ans3}) << endl;
}
int main()
{
  // your code goes here

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
