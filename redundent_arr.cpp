#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  unordered_map<ll, int> mp;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    mp[a[i]]++;
  }
  ll ans = n;
  for (int i = 1; i <= n; i++)
  {
    ll mul = i;
    ll req = (n - mp[i]);
    // cout << i << " " << req << endl;
    ans = min(ans, (req * mul));
  }
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