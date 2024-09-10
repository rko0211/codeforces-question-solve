#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int zset = 0, oset = 0;
  int zcnt = 0;
  int ocnt = 0;
  // if (n == 1)
  // {
  //   if (s[0] == '0')
  //   {
  //     cout << 1 << endl;
  //   }
  //   else
  //   {
  //     cout << 0 << endl;
  //   }
  //   return;
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   if (s[i] == '0')
  //   {
  //     zcnt++;
  //     if (ocnt > 0)
  //     {
  //       oset++;
  //       ocnt = 0;
  //     }
  //   }
  //   else
  //   {
  //     ocnt++;
  //     if (zcnt > 0)
  //     {
  //       zset++;
  //       zcnt = 0;
  //     }
  //   }
  // }
  // if (zcnt > 0)
  // {
  //   zset++;
  //   zcnt = 0;
  // }
  // else if (ocnt > 0)
  // {
  //   oset++;
  //   ocnt = 0;
  // }
  // // cout << zset << " " << oset << endl;
  // if (oset > zset)
  // {
  //   cout << 0 << endl;
  //   return;
  // }
  // else
  // {
  // oset<=zset
  int ans = 0;
  int i = 0;
  for (i = 0; i < n; i++)
  {
    if (s[i] == '0')
    {
      ans++;
    }
    else
    {
      break;
    }
  }
  for (int j = n - 1; j > i; j--)
  {
    if (s[j] == '0')
    {
      ans++;
    }
    else
    {
      break;
    }
  }
  cout << ans << endl;

  // }
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
