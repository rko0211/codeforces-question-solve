#include <bits/stdc++.h>
using namespace std;

void solve()
{
  string s;
  cin >> s;
  if (s.size() <= 2)
  {
    cout << "NO\n";
    return;
  }

  string t = "";
  t += s[0];
  t += s[1];

  if (t == "10")
  {
    string p = s.substr(2);
    if (!p.empty() && p[0] != '0')
    {
      try
      {
        if (stoi(p) >= 2)
        {
          cout << "YES\n";
          return;
        }
      }
      catch (const std::exception &e)
      {
        cout << "NO\n";
        return;
      }
    }
    cout << "NO\n";
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
