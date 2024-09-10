#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int u = 0;
  int d = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'U')
    {
      u++;
    }
    else
    {
      d++;
    }
  }
  if ((u % 2) == 1)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
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