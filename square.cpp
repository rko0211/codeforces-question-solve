#include <bits/stdc++.h>
using namespace std;
void solve()
{
  vector<pair<int, int>> vp;
  for (int i = 0; i < 4; i++)
  {
    int a, b;
    cin >> a >> b;
    vp.push_back({a, b});
  }
  sort(vp.begin(), vp.end());
  cout << abs(vp[0].second - vp[1].second) * abs(vp[0].first - vp[3].first) << endl;
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