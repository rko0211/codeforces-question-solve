#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, m;
  cin >> n >> m;
  vector<vector<ll>> item;
  ll maxmex = 0;
  for (int i = 0; i < n; i++)
  {
    int size;
    cin >> size;
    vector<int> temp(size);
    unordered_set<int> elements;
    for (int j = 0; j < size; j++)
    {
      cin >> temp[j];
      elements.insert(temp[j]);
      // cout << temp[i] << " ";
    }
    // cout << endl;

    // Step 2: Initialize mex as 0
    ll mex = 0;

    while (elements.find(mex) != elements.end())
    {
      mex++;
    }
    // maxmex = max(maxmex, mex);
    // cout << mex << endl;
    elements.insert(mex);

    mex = 0;

    while (elements.find(mex) != elements.end())
    {
      mex++;
    }
    maxmex = max(maxmex, mex);
    // cout << maxmex << endl;
  }
  // cout << maxmex << endl;

  ll mini = min(m, maxmex);
  ll sum = (m * (m + 1) / 2);
  ll d = (mini * (mini + 1) / 2);
  ll ans = 0;
  ans += (maxmex * (mini + 1));
  ans += (sum - d);
  cout << ans << endl;
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