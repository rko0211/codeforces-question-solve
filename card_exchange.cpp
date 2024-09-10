#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &p1, pair<int, int> &p2)
{
  return p1.second > p2.second;
}
void solve()
{
  int n, k;
  cin >> n >> k;
  int a[n];
  map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    m[a[i]]++;
  }
  vector<pair<int, int>> vp;
  for (auto &it : m)
  {
    vp.push_back({it.first, it.second});
  }
  sort(vp.begin(), vp.end(), cmp);
  // for (auto &it : vp)
  // {
  //   cout << it.first << " " << it.second << endl;
  // }
  // cout << endl;
  int val = 0;
  int cnt = 0;
  bool flag = true;
  for (auto &it : vp)
  {
    if ((it.second + val) >= k)
    {

      flag = false;
      break;
    }
    else
    {
      val = 0;
    }
  }
  if (!flag)
  {
    cout << (k - 1) << endl;
  }
  else
  {
    cout << n << endl;
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