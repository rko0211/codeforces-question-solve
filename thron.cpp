#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;

  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < n;)
  {
    if (s[i] == '*')
    {
      i++;
      if (s[i] == '*')
      {
        break;
      }
    }
    if (s[i] == '@')
    {
      ans++;

      i++;
    }
    else
    {
      i++;
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