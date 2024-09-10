#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> degree(N + 1, 0);
  vector<vector<int>> edges(N + 1);
  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    edges[a].push_back(b);
    edges[b].push_back(a);
    degree[a]++;
    degree[b]++;
  }
  long long total = 0;
  for (int i = 1; i <= N; i++)
  {
    total += (long long)degree[i] * (degree[i] - 1) / 2;
  }
  cout << total << endl;
  return 0;
}
