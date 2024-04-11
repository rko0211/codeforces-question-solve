#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll r, c, i, j;
  cin >> r >> c >> i >> j;
  // if (r == 1 || c == 1)
  // {
  //   if (r == 1)
  //   {
  //     if ((abs(i - 1) + abs(j - 1)) < (abs(i - 1) + abs(j - c)))
  //     {
  //       cout << 1 << " " << c << " " << 1 << " " << c << endl;
  //       return;
  //     }
  //     else
  //     {
  //       cout << 1 << " " << 1 << " " << 1 << " " << 1 << endl;
  //       return;
  //     }
  //   }
  //   else if (c == 1)
  //   {
  //     if ((abs(i - 1) + abs(j - 1)) < (abs(i - r) + abs(j - 1)))
  //     {
  //       cout << r << " " << 1 << " " << r << " " << 1 << endl;
  //       return;
  //     }
  //     else
  //     {
  //       cout << 1 << " " << 1 << " " << 1 << " " << 1 << endl;
  //       return;
  //     }
  //   }
  //   else
  //   {
  //     cout << 1 << " " << 1 << " " << 1 << " " << 1 << endl;
  //     return;
  //   }
  // }
  ll x1, y1, x2, y2;
  // Manhatan distance
  ll val = 0;
  ll ans = LLONG_MIN;
  vector<pair<int, int>> vp;
  vp.push_back({1, 1});
  if (c > 1)
    vp.push_back({1, c});
  if (r > 1)
    vp.push_back({r, 1});
  if (r > 1 && c > 1)
    vp.push_back({r, c});
  for (int x = 0; x < vp.size(); x++)
  {
    for (int y = 0; y < vp.size(); y++)
    {
      if (ans < ((abs(i - vp[x].first) + abs(j - vp[x].second)) + (abs(vp[x].first - vp[y].first) + abs(vp[x].second - vp[y].second)) + (abs(vp[y].first - i) + abs(vp[y].second - j))))
      {
        ans = (abs(i - vp[x].first) + abs(j - vp[x].second)) + (abs(vp[x].first - vp[y].first) + abs(vp[x].second - vp[y].second)) + (abs(vp[y].first - i) + abs(vp[y].second - j));
        x1 = vp[x].first;
        y1 = vp[x].second;
        x2 = vp[y].first;
        y2 = vp[y].second;
      }
    }
  }

  cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
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