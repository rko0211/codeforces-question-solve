#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// Function to create and display an adjacency list
void createAdjacencyList(const vector<pair<ll, ll>> &edges)
{
  // Initialize the adjacency list using an unordered_map of unordered_sets
  map<pair<ll, ll>, set<pair<ll, ll>>> adjList;
  int n = edges.size();
  // Update the adjacency list based on the given edges
  for (const auto &edge : edges)
  {
    int u = edge.first;
    int v = edge.second;
    adjList[{u, v}].insert({u, v});
    int ind = u + v;
    if (ind < edges.size())
    {
      adjList[{edges[ind].first, ind}].insert({u, v});
    }
    else
    {
      adjList[{n, 1}].insert({u, v});
    }
  }
  ll ans = 0;
  ll sum = 0;
  map<pair<ll, ll>, bool> vis;
  vis[{n, 1}] = true;
  for (const auto &pair : adjList)
  {
    sum = 0;
    ll f = pair.first.first;
    ll s = pair.first.second;
    for (auto neighbor : pair.second)
    {
      if (!vis[{f, s}])
      {
        sum += f;
        vis[{f, s}] = true;
      }
    }
    ans = max(ans, sum);
  }
  cout << ans << endl;
}

void solve()
{
  int n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  vector<pair<ll, ll>> edges(n);

  for (int i = 0; i < n; ++i)
  {
    edges[i].first = (a[i]);
    edges[i].second = i;
  }

  createAdjacencyList(edges);
}
int main()
{
  int t; // Number of edges

  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
