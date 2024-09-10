#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  int ans = INT_MAX;
  for (int i = 0; i <= (n - m); i++)
  {
    int cnt = 0;
    for (int k = i, j = 0; k < (i + m); k++, j++)
    {
      if (s[k] != t[j])
      {
        cnt++;
      }
    }
    ans = min(ans, cnt);
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