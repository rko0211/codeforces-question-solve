#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a, a + n);
  ll minmod = a[0];
  for (int i = 1; i < n; i++)
  {
    ll maxi = max(a[i], minmod);
    ll mini = min(a[i], minmod);
    if (maxi % mini != 0)
    {
      minmod = min(minmod, (maxi % mini));
    }
    if (mini % maxi != 0)
    {
      minmod = min(minmod, (mini % maxi));
    }
  }
  // cout << minmod << endl;
  if (minmod == INT_MAX)
  {
    cout << "NO\n";
    return;
  }
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == minmod)
    {
      cnt++;
    }
  }

  if (cnt < 2)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
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