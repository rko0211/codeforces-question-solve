#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int pref[n + 1];
  pref[0] = 0;
  pref[1] = s[0] - '0';
  for (int i = 2; i <= n; i++)
  {
    pref[i] = (pref[i - 1] + (s[i - 1] - '0'));
  }
  ll ans = 0;

  map<int, ll> mp;

  for (int i = 0; i <= n; i++)
  {
    mp[(pref[i] - i)]++;
  }
  for (const auto &[f, s] : mp)
  {
    ans += (s * (s - 1) / 2);
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