#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin >> s;
  int l = s.size();
  char lastch = char('a' + l - 1);
  unordered_map<char, int> mp;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] <= lastch)
    {
      mp[s[i]]++;
      if (mp[s[i]] > 1)
      {
        cout << "NO\n";
        return;
      }
    }
    else
    {
      cout << "NO\n";
      return;
    }
  }
  int ind;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'a')
    {
      ind = i;
      break;
    }
  }
  int lo = ind - 1;
  int hi = ind + 1;
  char ch = 'b';
  while (lo >= 0 || hi < s.size())
  {

    if (lo >= 0 && s[lo] == ch)
    {
      ch++;
      lo--;
    }
    else if (hi < s.size() && s[hi] == ch)
    {
      ch++;
      hi++;
    }
    else
    {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
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