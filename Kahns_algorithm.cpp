#include <bits/stdc++.h>
using namespace std;
int main()
{

  // Topological sort is applicable in Directed acyclic graph
  int V, E;
  cin >> V >> E;
  vector<int> list[V];
  for (int i = 0; i < E; i++)
  {
    int a, b;
    cin >> a >> b;
    list[a].push_back(b);
  }
  int indegree[V] = {0};
  for (int i = 0; i < V; i++)
  {
    for (auto &it : list[i])
    {
      indegree[it]++;
    }
  }

  queue<int> q;
  for (int i = 0; i < sizeof(indegree) / sizeof(indegree[0]); i++)
  {
    if (indegree[i] == 0)
    {
      q.push(i);
    }
  }
  vector<int> toposort;
  while (!q.empty())
  {
    int node = q.front();
    q.pop();
    toposort.push_back(node);
    for (auto &it : list[node])
    {
      indegree[it]--;
      if (indegree[it] == 0)
      {
        q.push(it);
      }
    }
  }

  for (int i = 0; i < toposort.size(); i++)
  {
    cout << toposort[i] << " ";
  }
  cout << endl;
  if (toposort.size() != V)
  {
    cout << "CYCLE EXIST IN THE GRAPH\n";
  }
  else
  {
    cout << "NO CYCLE EXIST\n";
  }
  return 0;
}