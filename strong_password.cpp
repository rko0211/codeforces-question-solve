#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin >> s;
  string ans = "";
  bool f = false;
  for (int i = 0; i < s.size(); i++)
  {
    if (f == false && (i + 1) < s.size() && s[i] == s[i + 1])
    {
      ans += s[i];
      if (s[i] == 'z')
      {
        ans += "a";
      }
      else
      {
        ans += (s[i] + 1);
      }
      f = true;
    }
    else
    {
      ans += s[i];
    }
  }
  if (!f)
  {
    if (ans.back() != 'z')
      ans += (ans.back() + 1);
    else
    {
      ans += "a";
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