#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  unordered_map<char, int> mp;
  for (int i = 0; i < s.size(); i++)
  {
    mp[s[i]]++;
  }
  int ans = 0;
  ans += min(n, mp['A']);
  ans += min(n, mp['B']);
  ans += min(n, mp['C']);
  ans += min(n, mp['D']);

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