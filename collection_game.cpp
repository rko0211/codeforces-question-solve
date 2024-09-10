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
  vector<pair<ll, ll>> vp;
  for (int i = 0; i < n; i++)
  {
    vp.push_back({a[i], i});
  }
  sort(vp.begin(), vp.end());
  ll pref[n];
  pref[0] = vp[0].first;
  for (int i = 1; i < n; i++)
  {
    pref[i] = (pref[i - 1] + vp[i].first);
  }
  int ans[n];
  int val = (n - 1);
  int x = n - 1;
  ans[x] = (n - 1);
  x--;

  for (int i = n - 2; i >= 0; i--)
  {
    if ((pref[i]) >= (pref[i + 1] - pref[i]))
    {
      ans[x] = ans[x + 1];
      x--;
    }
    else
    {

      ans[x] = i;
      x--;
    }
  }

  int res[n];
  for (int i = 0; i < n; i++)
  {

    int ind = vp[i].second;
    res[ind] = ans[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << res[i] << " ";
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