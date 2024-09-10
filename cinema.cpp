#include <bits/stdc++.h>
using namespace std;
int c, d;

bool cmp(pair<int, int> v1, pair<int, int> v2)
{
  if ((abs(v1.first - c) + abs(v1.second - d)) != 0 && (abs(v2.first - c) + abs(v2.second - d)) != 0)
    return (abs(v1.first - c) + abs(v1.second - d)) > (abs(v2.first - c) + abs(v2.second - d));

  else
  {
    if (v1.first != v2.first)
    {
      return v1.first < v2.first;
    }
    else
    {
      return v1.second < v2.second;
    }
  }
}
void solve()
{
  int n, m, k;
  cin >> n >> m >> k;
  map<pair<int, int>, int> mp;
  vector<pair<int, int>> vcp;
  while (k--)
  {
    int x, y;
    cin >> x >> y;
    // cout << x << " " << y << endl;
    vcp.push_back({x, y});
  }

  for (auto &it : vcp)
  {

    int p1 = it.first;
    int p2 = it.second;
    // cout << sz << endl;
    c = p1;
    d = p2;
    vector<pair<int, int>> vp;
    vp.push_back({p1, p2});
    if (p1 - 1 > 0)
      vp.push_back({p1 - 1, p2});
    if (p2 - 1 > 0)
      vp.push_back({p1, p2 - 1});
    vp.push_back({p1, p2 + 1});
    vp.push_back({p1 + 1, p2});

    sort(vp.begin(), vp.end(), cmp);
    for (int i = 0; i < 5; i++)
    {
      if (mp[{vp[i].first, vp[i].second}] == 0)
      {
        cout << vp[i].first << " " << vp[i].second << endl;
        mp[{vp[i].first, vp[i].second}]++;
        if (vp[i].first == p1 && vp[i].second != p2)
        {
          if (vp[i].second > p2)
          {
            vp[i].second++;
          }
          else
          {
            if (vp[i].second - 1 > 0)
              vp[i].second--;
          }
        }
        else if (vp[i].first != p1 && vp[i].second == p2)
        {
          if (vp[i].first < p1)
          {
            if (vp[i].first - 1 > 0)
              vp[i].first--;
          }
          else
          {
            vp[i].first++;
          }
        }

        else if (vp[i].first == p1 && vp[i].second == p2)
        {
          if (vp[i].first - 1 > 0)
            vp[i].first--;
        }

        break;
      }
    }
  }
}
int main()
{

  solve();

  return 0;
}