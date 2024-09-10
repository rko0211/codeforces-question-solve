#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  string ans = "";
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '1')
    {
      ans += s[i];
    }
    else
    {
      if (ans.size() == 0 || ans.back() != s[i])
      {
        ans += s[i];
      }
    }
  }

  int z = 0, o = 0;
  for (int i = 0; i < ans.size(); i++)
  {
    if (ans[i] == '0')
    {
      z++;
    }
    else
    {
      o++;
    }
  }

  if (o > z)
  {
    cout << "Yes\n";
  }
  else
  {
    cout << "No\n";
  }
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