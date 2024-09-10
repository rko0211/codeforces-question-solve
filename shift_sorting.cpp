#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  string s;
  cin >> s;
  stack<pair<char, int>> st;
  for (int i = s.size() - 1; i >= 0; i--)
  {
    st.push({s[i], i});
  }

  ll ans = 0;
  int cnt = 0;
  while (!st.empty())
  {
    char t = st.top().first;
    int ind = st.top().second;
    st.pop();
    if (t == '1')
    {
      while (st.size() > 0)
      {
        if (st.top().first == '0')
        {
          ans += (st.top().second - ind + 1);
          ind++;
        }

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