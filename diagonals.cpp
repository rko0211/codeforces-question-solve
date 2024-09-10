#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &p1, pair<int, int> &p2)
{
  return p1.second >= p2.second;
}
void solve()
{
  int n;
  cin >> n;
  int k;
  cin >> k;

  // map<int, int> mp;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int j = 1; j <= n; j++)
  //   {
  //     int v = (i + j);
  //     mp[v]++;
  //   }
  // }

  // vector<pair<int, int>> vp;
  // for (auto &it : mp)
  // {
  //   vp.push_back({it.first, it.second});
  // }

  // sort(vp.begin(), vp.end(), cmp);
  // long long ans = 0;
  // for (int i = 0; i < vp.size(); i++)
  // {
  //   int f = vp[i].first;
  //   cout << f << " " << mp[f] << " ";
  //   if (k <= 0)
  //   {
  //     break;
  //   }

  //   int mini = min(k, mp[f]);
  //   mp[f] = 0;
  //   cout << mp[f] << endl;
  //   k -= mini;
  // }
  // // cout << k;
  // cout << endl;
  // for (auto &it : mp)
  // {
  //   if (it.second == 0)
  //   {
  //     ans++;
  //   }
  // }
  int ans = 0;
  int v1 = 2 * ((n - 1) * n / 2);
  v1 += n;
  if ((n * n) <= k)
  {
    cout << 2 * n - 1 << endl;
  }
  else
  {
    if (n <= k)
    {
      ans++;
      k -= n;
    }
    int v = n;
    v--;
    while (k > 0)
    {
      k -= v;
      if (k > 0)
      {
        k -= v;
        ans++;
      }
      ans++;
      v--;
    }
    cout << ans << endl;
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