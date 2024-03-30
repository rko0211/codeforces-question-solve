#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int l = 0;
  int o = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'L')
      l++;
    else
      o++;
  }

  int nl = 0;
  int no = 0;
  int ans = -1;
  for (int i = 0; i < n - 1; i++)
  {
    if (s[i] == 'L')
    {
      nl++;
      // cout << nl << " " << (l - nl) << endl;
      // cout << no << " " << (o - no) << endl;
      if ((nl != (l - nl)) && (no != (o - no)))
      {
        ans = (i + 1);
      }
    }

    else
    {
      no++;

      if ((nl != (l - nl)) && (no != (o - no)))
      {
        ans = (i + 1);
      }
    }
  }
  cout << ans << endl;
}
int main()
{

  solve();

  return 0;
}