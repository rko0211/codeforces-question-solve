#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  int b[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int j = 0; j < n; j++)
    cin >> b[j];

  vector<pair<int, int>> vp;
  for (int i = 0; i < n; i++)
  {
    vp.push_back({a[i], b[i]});
  }
  sort(vp.begin(), vp.end());
  for (auto &it : vp)
  {
    cout << it.first << " ";
  }
  cout << endl;
  for (auto &it : vp)
  {
    cout << it.second << " ";
  }
  cout << endl;
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