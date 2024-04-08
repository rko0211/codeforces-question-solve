#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int l = 0;
  int r = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == ')')
    {
      r++;
      if (l > 0)
      {
        l--;
        r--;
      }
    }
    else
    {
      // s[i]=='('
      l++;
    }
  }
  cout << min(l, r) << endl;
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