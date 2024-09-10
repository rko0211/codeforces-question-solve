#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  unordered_set<char> st;
  for (int i = 0; i < s.size(); i++)
  {
    st.insert(s[i]);
  }
  if (st.size() == 1)
  {
    cout << 0 << endl;
    return;
  }
  if (n == 2)
  {
    if (s[0] != s[1])
    {
      cout << 1 << endl;
      cout << 1 << endl;
      return;
    }
    else
    {
      cout << 0 << endl;
      return;
    }
  }

  int z = 0;
  int o = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '0')
    {
      z++;
    }
    else
    {
      o++;
    }
  }

  if (z % 2 == 1 || o % 2 == 1)
  {
    cout << -1 << endl;
    return;
  }

  int cnt = 0;
  vector<int> ind;
  string t = s;
  char p = '@';
  for (int i = 0; i < n - 1;)
  {
    if ((s[i] == s[i + 1] && p == s[i]))
    {
      i += 2;
    }
    else
    {
      if (s[i] == s[i + 1])
      {
        i += 2;
      }
      else
      {
        char ch = s[i];
        if (s[i] == '0')
        {
          s[i] = '1';
        }
        else
        {
          s[i] = '0';
        }
        ind.push_back((i + 1));
        i += 2;
        while (i < n && s[i] == ch)
        {
          i++;
        }
        if (i < n && s[i] != ch)
        {
          ind.push_back((i + 1));
          if (s[i] == '0')
          {
            s[i] = '1';
          }
          else
          {
            s[i] = '0';
          }
        }

        else
        {
          cout << -1 << endl;
          return;
        }
        i++;
        // cout << ch << endl;
        // cout << (i + 1) << " " << s << endl;
      }
    }
  }

  // cout << s << endl;
  // cout << s << endl;
  for (int i = 0; i < n - 1; i += 2)
  {
    if (s[i] != s[i + 1])
    {
      cout << -1 << endl;
      return;
    }
  }
  cout << ind.size() << endl;
  for (int i = 0; i < ind.size(); i++)
  {
    cout << ind[i] << " ";
  }
  cout << endl;
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