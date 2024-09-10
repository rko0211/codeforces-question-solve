#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin >> s;
  char ch = 'a';
  int ans = 0;
  for (int i = 0; i < s.size(); i++)
  {
    ans += min(abs(ch - s[i]), 26 - abs(ch - s[i]));
    ch = s[i];
  }
  cout << ans << endl;
}
int main()
{

  solve();

  return 0;
}