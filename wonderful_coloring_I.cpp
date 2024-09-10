#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin >> s;
  unordered_map<char, int> mp;
  for (int i = 0; i < s.size(); i++)
  {
    mp[s[i]]++;
  }
  unordered_set<char> r, g;
  int cnt = 0;
  for (auto &it : mp)
  {
    // cout << it.first << " " << it.second << endl;
    if (it.second > 1)
    {
      r.insert(it.first);
      g.insert(it.first);
    }
    else
    {
      cnt++;
    }
  }
  // cout<<cnt<<endl;
  cout << (r.size() + cnt / 2) << endl;
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