#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<pair<int, int>> vp;
  int first = -1;
  int last = -1;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '?')
    {
      if (first == -1)
      {
        first = i;
      }
      last = i;
    }
    else
    {
      if (first != -1)
      {
        vp.push_back({first, last});
      }
      first = -1;
      last = -1;
    }
  }

  if (first != -1)
  {
    vp.push_back({first, last});
  }

  for (auto &it : vp)
  {
    // cout << it.first << " " << it.second << endl;
    int f = it.first;
    int l = it.second;

    if ((l - f + 1) == n)
    {
      bool flag = false;
      for (int k = f; k <= l; k++)
      {
        if (!flag)
        {
          s[k] = 'B';
          flag = true;
        }
        else
        {
          s[k] = 'R';
          flag = false;
        }
      }
      break;
    }
    char ch1, ch2;
    if ((l + 1) < n)
    {
      ch1 = s[l + 1];
      if (ch1 == 'B')
      {
        ch2 = 'R';
      }
      else
      {
        ch2 = 'B';
      }

      if ((l - f + 1) % 2 == 1)
      {
        bool flag = false;
        for (int k = f; k <= l; k++)
        {
          if (!flag)
          {
            s[k] = ch2;
            flag = true;
          }
          else
          {
            s[k] = ch1;
            flag = false;
          }
        }
      }

      else
      {
        bool flag = false;
        for (int k = f; k <= l; k++)
        {
          if (!flag)
          {
            s[k] = ch1;
            flag = true;
          }
          else
          {
            s[k] = ch2;
            flag = false;
          }
        }
      }
    }

    else
    {
      ch1 = s[f - 1];
      if (ch1 == 'B')
      {
        ch2 = 'R';
      }
      else
      {
        ch2 = 'B';
      }
      bool flag = false;
      for (int k = f; k <= l; k++)
      {
        if (!flag)
        {
          s[k] = ch2;
          flag = true;
        }
        else
        {
          s[k] = ch1;
          flag = false;
        }
      }
    }

    // cout << ch1 << " " << ch2 << endl;
  }

  cout << s << endl;
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