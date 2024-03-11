#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  map<char, int> m2, m1;

  stack<char> st;
  for (int i = n - 1; i >= 0; i--)
  {
    st.push(s[i]);
  }
  char ch;
  ll ans = 0;
  string s1 = "", s2 = "";
  while (!st.empty())
  {
    ch = st.top();
    st.pop();
    if (ch == 'm' || ch == 'a' || ch == 'p')
    {
      m1[ch]++;

      if ((s1 + ch) == "m" || (s1 + ch) == "ma" || (s1 + ch) == "map")
      {
        s1 += ch;
      }
    }

    else
    {
      // cout << s1 << endl;
      // cout << m1['m'] << " " << m1['a'] << " " << m1['p'] << endl;
      if (s1 == "map")
      {
        ans += min({m1['m'], m1['a'], m1['p']});
        // s1 = "";
      }
      s1 = "";
      m1.clear();
    }

    if (ch == 'p' || ch == 'i' || ch == 'e')
    {
      m2[ch]++;

      if ((s2 + ch) == "p" || (s2 + ch) == "pi" || (s2 + ch) == "pie")
      {
        s2 += ch;
      }
    }

    else
    {
      // cout << s2 << endl;
      // cout << m2['p'] << " " << m2['i'] << " " << m2['e'] << endl;
      if (s2 == "pie")
      {

        ans += min({m2['p'], m2['i'], m2['e']});
        // s2 = "";
      }
      s2 = "";
      m2.clear();
    }
  }

  if (s1 == "map")
  {
    ans += min({m1['m'], m1['a'], m1['p']});
    // s1 = "";
  }
  if (s2 == "pie")
  {
    ans += min({m2['p'], m2['i'], m2['e']});
    // s2 = "";
  }

  for (int i = n - 1; i >= 0; i--)
  {
    st.push(s[i]);
  }

  string str = "";
  m1.clear();

  ll dif = 0;
  while (!st.empty())
  {
    char c = st.top();
    st.pop();

    if (c == 'p' || c == 'i' || c == 'e' || c == 'm' || c == 'a')
    {
      m1[c]++;
      if ((str + c) == "m" || (str + c) == "ma" || (str + c) == "map" || (str + c) == "mapi" || (str + c) == "mapie")
      {
        str += c;
      }
    }
    else
    {
      // cout << str << endl;
      if (str == "mapie")
      {
        if (m1['p'] == 1)
        {
          dif++;
        }
      }
      str = "";
      m1.clear();
    }
  }
  if (str == "mapie")
  {
    if (m1['p'] == 1)
    {
      dif++;
    }
  }
  // cout << dif << endl;
  cout << ans - dif << endl;
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