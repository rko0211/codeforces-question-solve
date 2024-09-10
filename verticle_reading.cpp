#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  string s, t;
  cin >> s >> t;
  n = s.size();
  for (int i = 0; i < n - 1; i++)
  {
    vector<string> vs;
    int inc = (i + 1);
    for (int j = 0; j < n; j += inc)
    {
      string temp = "";
      for (int k = j; k < (j + inc) && k < n; k++)
      {
        temp += s[k];
      }
      // cout << temp << " ";
      vs.push_back(temp);
    }
    // cout << endl;

    for (int p = 0; p < inc; p++)
    {
      string ans = "";
      for (int p1 = 0; p1 < vs.size(); p1++)
      {
        if (vs[p1].size() - 1 >= p)
        {
          ans += vs[p1][p];
        }
      }
      // cout << ans << endl;
      if (ans == t)
      {
        cout << "Yes\n";
        return;
      }
    }
  }
  cout << "No\n";
}
int main()
{

  solve();

  return 0;
}