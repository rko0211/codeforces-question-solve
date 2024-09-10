#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin >> s;

  int ans = 1;
  bool extra = false;
  int n = s.size();
  for (int i = 0; i < n - 1; i++)
  {
    ans += (s[i] != s[i + 1]);
    extra |= (s[i] == '0' && s[i + 1] == '1');
  }
  cout << ans - extra << endl;
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