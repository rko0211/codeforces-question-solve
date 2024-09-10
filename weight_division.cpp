#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void dfs(int node, vector<pair<ll, ll>> adj[], vector<bool> &vis, priority_queue<ll> &pq, ll &sum, vector<ll> &leaves)
{
  vis[node] = true;
  if (adj[node].size() == 1)
  {
    leaves[node] = 1;
    return;
  }
  for (auto &it : adj[node])
  {
    if (!vis[(it.first)])
    {

      dfs(it.first, adj, vis, pq, sum, leaves);
      leaves[node] += leaves[it.first];
      sum += (it.second * leaves[it.first]);
    }
  }
}
void solve()
{
  ll n, s;
  cin >> n >> s;
  vector<pair<ll, ll>> adj[n + 1];
  for (int i = 0; i < n - 1; i++)
  {
    ll a, b, w;
    cin >> a >> b >> w;
    adj[a].push_back({b, w});
    adj[b].push_back({a, w});
  }
  vector<bool> vis(n + 1, false);
  ll ans = 0;
  vector<ll> leaves(n + 1, 0);
  priority_queue<ll> pq;
  ll sum = 0;
  if (!vis[1])
  {
    dfs(1, adj, vis, pq, sum, leaves);
  }
  if (pq.size() > 0)
  {
    while (sum > s)
    {
      ans++;
      ll t = pq.top();
      pq.pop();
      sum -= t;
      sum += (t / 2);
      pq.push((t / 2));
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
    /* code */
    solve();
  }

  return 0;
}