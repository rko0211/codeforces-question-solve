#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (n % 2 == 1)
  {
    unordered_set<char> st;
    for (int i = 0; i < s.size(); i++)
    {
      st.insert(s[i]);
    }
    if (st.size() == 1)
    {
      cout << 1 << endl;
      return;
    }
    else
    {
      cout << n << endl;
      return;
    }
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