#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin >> s;
  unordered_set<char> st;
  for (int i = 0; i < s.size(); i++)
  {
    st.insert(s[i]);
  }
  if (st.size() == 1)
  {
    cout << "NO\n";
    return;
  }
  else
  {
    cout << "YES\n";
    for (int i = 1; i < s.size(); i++)
    {
      if (s[i] != s[0])
      {
        swap(s[i], s[0]);
        break;
      }
    }
    cout << s << endl;
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