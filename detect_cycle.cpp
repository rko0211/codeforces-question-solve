#include <bits/stdc++.h>
using namespace std;
// Detect cycle in Directed Graph
bool dfs(int node, vector<int> list[], vector<bool> &vis, vector<bool> &pathVis)
{

  vis[node] = true;
  pathVis[node] = true;
  for (auto &it : list[node])
  {
    if (!vis[it])
    {
      vis[it] = true;
      pathVis[it] = true;
      if (dfs(it, list, vis, pathVis) == true)
      {
        return true;
      }
      pathVis[it] = false;
    }
    else if (vis[it] && pathVis[it])
    {
      return true;
    }
  }
  return false;
}
int main()
{

  int v, e;
  cin >> v >> e;
  vector<int> list[v];
  for (int i = 0; i < e; i++)
  {
    int a, b;
    cin >> a >> b;
    list[a].push_back(b);
  }
  vector<bool> vis(v, false);
  vector<bool> pathVis(v, false);
  bool isCycle = false;
  for (int i = 0; i < v; i++)
  {
    if (dfs(i, list, vis, pathVis) == true)
    {
      isCycle = true;
      cout << "CYCLE EXIST IN THE GRAPH\n";
      break;
    }
  }
  // cout << isCycle << endl;
  if (!isCycle)
  {
    cout << "CYCLE DOES NOT EXIST IN THE GRAPH\n";
  }
  return 0;
}