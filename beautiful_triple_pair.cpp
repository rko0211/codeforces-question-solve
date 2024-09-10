#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  long long ans = 0;
  map<pair<int, int>, vector<int>> m;
  for (int i = 0; i < n - 2; i++)
  {
    m[{a[i], a[i + 1]}].push_back(a[i + 2]);
    m[{a[i], a[i + 2]}].push_back(a[i + 1]);
    m[{a[i + 1], a[i + 2]}].push_back(a[i]);
  }

  for (auto &it : m)
  {
    // cout << it.first.first << " " << it.first.second << endl;
    map<int, int> mp;
    for (auto &ele : it.second)
    {
      // cout << ele << endl;
      mp[ele]++;
    }
    int val = it.second.size();
    int extra = 0;
    int v;
    for (auto &itr : mp)
    {
      int temp = val - extra - itr.second;
      v = (temp);
      ans += (temp);
      extra += itr.second;
    }
    // cout << "number of pairs " << v << endl;
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