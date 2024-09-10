#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  string t;
  cin >> s >> t;
  if (s[0] == '1')
  {
    cout << "YES\n";
    return;
  }
  bool flag = false;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == t[i])
    {
      flag = true;
    }
    else
    {
      flag = false;
      break;
    }
  }

  if (flag)
  {
    cout << "YES\n";
    return;
  }
  // cout << "j;\n";
  bool f = false;
  for (int i = 0; i < n; i++)
  {

    if (s[i] == '1')
    {
      f = true;
    }
    if (t[i] == '1')
    {
      if (f)
      {
        cout << "YES\n";
        return;
      }
      else
      {
        f = false;
        break;
      }
    }
  }
  if (f)
  {
    cout << "YES\n";
  }
  else
    cout << "NO\n";
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