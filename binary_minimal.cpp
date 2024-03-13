#include <bits/stdc++.h>
using namespace std;
void solve()
{

  int n;
  cin >> n;
  int k;
  cin >> k;
  string s;
  cin >> s;
  string t = s;
  int tk = k;
  for (int i = 0; i < n; i++)
  {
    if (k > 0 && s[i] == '1')
    {
      s[i] = '0';
      k--;
    }
  }
  string ans = "";
  if (k > 0)
  {
    for (int i = n - 1; i >= 0; i--)
    {
      if (k <= 0)
      {
        break;
      }
      else
      {
        s[i] = '@';
        k--;
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (s[i] != '@')
      ans += s[i];
  }

  // Delete function
  for (int i = 0; i < n; i++)
  {
    if (tk <= 0)
    {
      break;
    }
    else
    {
      if (t[i] == '1')
      {
        t[i] = '@';
        tk--;
      }
    }
  }

  if (tk > 0)
  {
    for (int i = 0; i < n; i++)
    {
      if (tk <= 0)
      {
        break;
      }
      else
      {
        if (t[i] != '@')
        {
          t[i] = '@';
          tk--;
        }
      }
    }
  }

  // cout << t << endl;
  string ans1 = "";
  for (int i = 0; i < n; i++)
  {
    if (t[i] != '@')
    {
      ans1 += t[i];
    }
  }
  if (ans1.size() == 0)
  {
    cout << ans1 << endl;
    return;
  }
  else if (ans.size() == 0)
  {
    cout << ans << endl;
    return;
  }
  for (int i = 0; i < max(ans1.size(), ans.size()); i++)
  {
    if (i >= ans1.size())
    {
      cout << ans1 << endl;
      return;
    }
    if (i >= ans.size())
    {
      cout << ans << endl;
      return;
    }
    if ((ans[i] - '0') == (ans1[i] - '0'))
    {
      continue;
    }
    else if ((ans[i] - '0') < (ans1[i] - '0'))
    {
      cout << ans << endl;
      return;
    }
    else
    {
      cout << ans1 << endl;
      return;
    }
  }

  cout << ans << endl;
  return;
}

int main()
{
  // your code goes here

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
