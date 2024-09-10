#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  char c1 = '(';
  char c2 = ')';
  s[0] = '(';
  for (int i = n - 1; i > 1; i -= 2)
  {
    if (s[i] == ')')
    {
      if ((i - 2) >= 0 && s[i - 2] == ')')
      {
        s[i - 1] = '(';
      }
      else if ((i - 2) >= 0 && s[i - 2] == '(')
      {
        s[i - 1] = ')';
      }
    }
    else
    {
      s[i - 1] = s[i];
    }
  }

  // cout << s << endl;

  stack<pair<char, int>> st;
  long long ans = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '(')
    {
      st.push({s[i], i});
    }
    else if (s[i] == ')')
    {
      if (!st.empty() && st.top().first == '(')
      {
        int val = st.top().second;
        ans += (i - val);
        st.pop();
      }
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
