#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  unordered_map<char, int> mp;
  for (int i = 0; i < n; i++)
  {
    mp[s[i]]++;
  }
  int ans = 0;
  for (int i = 0; i < 7; i++)
  {
    if (mp[('A' + i)] < m)
    {
      ans += (m - mp[('A' + i)]);
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