#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  unordered_map<ll, int> um;
  vector<ll> v;
  for (int i = 0; i < n; i++)
  {
    if (um[a[i]] == 0)
    {
      v.push_back(a[i]);
      um[a[i]]++;
    }
  }

  sort(v.begin(), v.end());
  int val = n;

  bool vis[n] = {false};
  ll minval = (v[0] + n);
  v[0] += n;
  for (int i = 1; i < v.size(); i++)
  {

    if ((abs(v[i] - minval) < n) && !vis[abs(v[i] - minval)])
    {
      v[i] += abs(v[i] - minval);
      vis[abs(v[i] - minval)] = true;
    }
    else
    {
      minval = (v[i] + val);
      v[i] += val;
      val = (v[i] + val);
        }
  }
  um.clear();
  for (auto &it : v)
  {
    um[it]++;
  }
  int ans = INT_MIN;
  for (auto &it : um)
  {
    ans = max(ans, it.second);
  }
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