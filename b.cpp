#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  string ans = "";
  // cout << char('a' + 26) << endl;
  map<char, int> m;
  char ch = 'a';
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 26; j++)
    {
      if (m[('a' + j)] == a[i])
      {
        ans += char('a' + j);
        m[('a' + j)]++;
        break;
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