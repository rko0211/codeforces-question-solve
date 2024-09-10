#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool cmp(pair<pair<int, int>, ll> &p1, pair<pair<int, int>, ll> &p2)
{
  return p1.second <= p2.second;
}
void solve()
{
  int n;
  cin >> n;
  ll c;
  cin >> c;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int sum = 0;
  vector<pair<pair<int, int>, ll>> vp;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      vp.push_back({{i, j}, (a[i] * a[j])});
    }
  }

  sort(vp.begin(), vp.end(), cmp);

  unordered_set<int> us;
  us.insert(0);
  for (int i = 0; i < vp.size(); i++)
  {
    cout << vp[i].second << " ";
    if ((c - vp[i].second) >= 0)
    {
      sum += vp[i].second;
      c = (c - vp[i].second);
    }
    else
    {
      us.insert(vp[i].first.first);
      us.insert(vp[i].first.second);
    }
  }

  cout << endl;
  cout << sum << endl;
  cout << us.size() << endl;
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