#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void dfs(vector<int> list[], int s, vector<bool> &vis, ll &cnt)
{
  vis[s] = true;
  for (auto &it : list[s])
  {
    if (vis[it] == false)
    {
      cnt++;
      dfs(list, it, vis, cnt);
    }
  }
}
void solve()
{
  int n, m;
  cin >> n >> m;
  vector<bool> vis(n + 1, false);
  vector<int> list[n + 1];
  int a, b;
  for (int i = 0; i < m; i++)
  {
    cin >> a >> b;
    list[a].push_back(b);
    list[b].push_back(a);
  }
  ll ans = 0;
  ll cnt = 0;
  for (int i = 1; i < n + 1; i++)
  {
    if (vis[i] == false)
    {
      vis[i] = true;
      dfs(list, list[i][0], vis, cnt);
      ans += (cnt * (cnt + 1) / 2);
      cnt = 0;
    }
    else
    {

      if (cnt > 0)
      {
        cnt--;
        ans += cnt;
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