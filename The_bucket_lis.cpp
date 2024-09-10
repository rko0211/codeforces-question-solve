#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  vector<pair<int, int>> vp;
  vector<int> bucket(n);
  for (int i = 0; i < n; i++)
  {
    int s, t, b;
    cin >> s >> t >> b;
    vp.push_back({s, t});
    bucket[i] = b;
  }
  sort(vp.begin(), vp.end());
  int ans = 0;
  unordered_map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    m[bucket[i]]++;
  }
  for (auto &it : m)
  {
    ans += 1;
  }
  bool flag[11] = {false};
  int last = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    }
}
int main()
{

  solve();

  return 0;
}