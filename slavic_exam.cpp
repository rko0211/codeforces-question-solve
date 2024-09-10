#include <bits/stdc++.h>
using namespace std;
void solve()
{

  string s, t;
  cin >> s >> t;
  int i = 0;
  int j = 0;
  while (i < s.size() && j < t.size())
  {
    if (s[i] == t[j])
    {
      i++;
      j++;
    }
    else if (s[i] == '?')
    {
      s[i] = t[j];
      i++;
      j++;
    }
    else
    {
      i++;
    }
  }

  if (j >= t.size())
  {
    while (i < s.size())
    {
      if (s[i] == '?')
        s[i] = 'a';
      i++;
    }
    cout << "YES\n";
    cout << s << endl;
  }
  else
  {
    cout << "NO\n";
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