#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<long, long> p1, pair<long, long> p2)
{
  if (p1.first != p2.first)
  {
    return p1.first > p2.first;
  }
  else
  {
    return p1.second < p2.second;
  }
}
void solve()
{
  int n, m;
  cin >> n >> m;

  int size = m + n + 1;
  long a[size], b[size];

  for (int i = 0; i < size; i++)
  {
    cin >> a[i];
  }
  for (int j = 0; j < size; j++)
  {
    cin >> b[j];
  }
  vector<pair<long, long>> vp;
  for (int i = 0; i < size; i++)
  {
    vp.push_back({a[i], b[i]});
  }
  sort(vp.begin(), vp.end(), cmp);
  
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