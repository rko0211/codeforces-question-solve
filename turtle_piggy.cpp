#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    mp[a[i]]++;
  }
  vector<pair<int, int>> vp;
  for (auto &it : mp)
  {
    vp.push_back({it.first, it.second});
  }

  int i = 0;
  int j = vp.size() - 1;
  int cnt = n - 1;
  bool f = false;
  while (cnt > 0)
  {
    if (vp[i].second == 0)
    {
      i++;
    }
    if (vp[j].second == 0)
    {
      j--;
    }

    if (!f)
    {
      // turtle
      vp[i].second--;
      f = true;
    }
    else
    {
      vp[j].second--;
      f = false;
    }

    cnt--;
  }

  // cout << i << " " << j << endl;
  int ans;
  for (auto &it : vp)
  {
    // cout << it.first << " " << it.second << endl;
    if (it.second == 1)
    {
      ans = it.first;
      break;
    }
  }
  // cout << endl;
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