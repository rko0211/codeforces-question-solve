#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin >> s;
  int l = 0;
  int ans = INT_MIN;
  int i = 0;
  for (i = 0; i < s.size(); i++)
  {
    if (s[i] == 'R')
    {
      ans = max(ans, (i + 1 - l));
      l = i + 1;
    }
  }
  ans = max(ans, (i + 1 - l));
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