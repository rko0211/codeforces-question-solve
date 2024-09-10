#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int cnt = n;
  map<char, int> mp;
  for (int i = 0; i < n; i++)
  {
    mp[s[i]]++;
  }
  string ans = "";
  while (cnt > 0)
  {
    for (int i = 0; i < 26; i++)
    {
      char ch = char('a' + i);
      if (mp[ch] > 0)
      {
        ans.push_back(ch);
        mp[ch]--;
        cnt--;
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