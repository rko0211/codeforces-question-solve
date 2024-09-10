#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin >> s;
  int n = s.size();
  vector<int> v1;
  vector<int> v2;
  vector<int> v3;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '1')
    {
      v1.push_back(i);
    }
    else if (s[i] == '2')
    {
      v2.push_back(i);
    }
    else
    {
      v3.push_back(i);
    }
  }
  if (v1.size() == 0 || v2.size() == 0 || v3.size() == 0)
  {
    cout << 0 << endl;
    return;
  }
  vector<pair<int, int>> vp;
  vp.push_back({1, 2});
  vp.push_back({2, 1});
  vp.push_back({1, 3});
  vp.push_back({3, 1});
  vp.push_back({2, 3});
  vp.push_back({3, 2});
  int ans = INT_MAX;
  for (auto &itr : vp)
  {
    int f = itr.first;
    int sec = itr.second;
    int req = (6 - (f + sec));
    for (int j = 0; j < n - 1; j++)
    {
      if ((s[j] - '0') == f && (s[j + 1] - '0') == sec)
      {
        int ind;
        if (req == 1)
        {
          ind = lower_bound(v1.begin(), v1.end(), (j + 2)) - v1.begin();
          if (ind != v1.size())
          {
            ans = min(ans, (v1[ind] - j + 1));
          }
        }
        else if (req == 2)
        {
          ind = lower_bound(v2.begin(), v2.end(), (j + 2)) - v2.begin();
          if (ind != v2.size())
          {
            ans = min(ans, (v2[ind] - j + 1));
          }
        }
        else
        {
          ind = lower_bound(v3.begin(), v3.end(), (j + 2)) - v3.begin();
          if (ind != v3.size())
          {
            ans = min(ans, (v3[ind] - j + 1));
          }
        }
      }
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