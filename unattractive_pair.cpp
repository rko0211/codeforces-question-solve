#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> v(26, 0);
  for (int i = 0; i < n; i++)
  {
    v[s[i] - 'a']++;
  }
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  int ans = 0;
  ans = max(n % 2, (2 * v[0] - n));

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