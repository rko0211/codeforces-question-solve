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
  sort(a, a + n);
  ll ans = 0;
  for (int ln = 2; ln <= n; ln++)
  {
    for (int i = 0; i < n; i++)
    {
      if (mp[a[i] + ln])
      {
        ans++;
      }
    }
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