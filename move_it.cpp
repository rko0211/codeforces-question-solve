#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  int w[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int j = 0; j < n; j++)
  {
    cin >> w[j];
  }

  map<int, vector<int>> mp;
  for (int i = 0; i < n; i++)
  {
    mp[a[i]].push_back(w[i]);
  }
  long long ans = 0;
  for (auto &it : mp)
  {
    sort(it.second.begin(), it.second.end());
    if (it.second.size() > 1)
    {
      int len = it.second.size();
      for (int i = 0; i < len - 1; i++)
      {
        ans += it.second[i];
      }
    }
  }
  cout << ans << endl;
}
int main()
{

  solve();

  return 0;
}