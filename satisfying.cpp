#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll maxi = 0, mini = INT_MAX;
  vector<ll> v;
  for (int i = 0; i < n; i++)
  {
    int a;
    ll x;
    cin >> a >> x;
    if (a == 3)
    {
      v.push_back(x);
    }
    else if (a == 1)
    {
      maxi = max(maxi, x);
    }
    else
    {
      mini = min(mini, x);
    }
  }

  ll ans = (mini - maxi + 1);
  if (ans < 0)
  {
    cout << 0 << endl;
    return;
  }
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] >= maxi && v[i] <= mini)
    {
      ans--;
    }
  }
  // cout << maxi << " " << mini << endl;
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