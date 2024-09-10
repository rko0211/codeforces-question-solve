#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m, k;
  cin >> n >> m >> k;
  string s;
  cin >> s;
  int c = 0;
  int w = 0;
  int ll = 0;
  int l = 0;
  int lw = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'L')
    {
      if ((i + 1 - ll) <= m)
      {
        // k += w;
        c = 0;
        w = 0;
      }
      else
      {
        if (c > 0)
        {
          cout << "NO\n";
          return;
        }
        if ((k - w) < 0)
        {
          cout << "NO\n";
          return;
        }
        else
        {
          k -= w;
        }
      }

      ll = i + 1;
    }
    else if (s[i] == 'W')
    {
      w++;
      if ((i + 1 - ll) <= m)
      {
        w = 1;
        c = 0;
      }
    }
    else if (s[i] == 'C')
    {
      c++;
    }
  }
  if ((n + 1 - ll) <= m)
  {
    // k += w;
    c = 0;
    w = 0;
  }

  else
  {
    if (c > 0)
    {
      cout << "NO\n";
      return;
    }
    if ((k - w) < 0)
    {
      cout << "NO\n";
      return;
    }
    else
    {
      k -= w;
    }
  }
  cout << "YES\n";
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