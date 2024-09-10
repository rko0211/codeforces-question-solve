#include <bits/stdc++.h>
using namespace std;
struct cmp
{
  bool operator()(const pair<int, int> &p1, const pair<int, int> &p2)
  {
    return p1.second > p2.second;
  }
};

void solve()
{
  int n;
  cin >> n;
  priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq, gq;
  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    pq.push({a, b});
  }
  int ans = INT_MIN;
  while (!pq.empty())
  {
    pair<int, int> top = pq.top();
    pq.pop();
    if (gq.size() == 0)
    {
      gq.push(top);
      ans = 1;
    }
    else
    {
      if (gq.top().second > top.first)
      {
        gq.push(top);
      }
      else
      {
        gq.pop();
        gq.push(top);
      }
      int size = gq.size();
      ans = max(ans, size);
    }
  }
  cout << ans << endl;
}
int main()
{

  solve();

  return 0;
}