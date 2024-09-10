#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  set<char> st;
  for (int i = 0; i < n; i++)
  {
    st.insert(s[i]);
  }
  string tem = "";
  for (auto &it : st)
  {
    tem += it;
  }
  sort(tem.begin(), tem.end());

  int m = tem.size();
  unordered_map<char, char> um;
  for (int i = 0; i < m; i++)
  {
    um[tem[i]] = tem[m - i - 1];
  }

  string ans = "";
  for (int i = 0; i < n; i++)
  {
    ans += um[s[i]];
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