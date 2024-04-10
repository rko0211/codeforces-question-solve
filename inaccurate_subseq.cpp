#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m, k;
  cin >> n >> m >> k;
  int a[n];
  int b[m];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int j = 0; j < m; j++)
    cin >> b[j];

  unordered_set<int> us, us1;
  unordered_map<int, int> mp, mp1;
  for (int i = 0; i < m; i++)
  {
    us.insert(b[i]);
    mp[b[i]]++;
  }
  int val = us.size();
  for (int i = 0; i < m; i++)
  {
    mp1[a[i]]++;
    us.insert(a[i]);
  }
  int cnt = 0;
  for (int i = 0; i < m; i++)
  {
    if (mp[a[i]] >= mp1[a[i]])
    {
      cnt += mp1[a[i]];
      mp[a[i]] -= mp[a[i]];
    }
    else
    {
      cnt += mp[a[i]];
      mp[a[i]] = 0;
    }
  }
  mp.clear();
  for (int i = 0; i < m; i++)
  {
    mp[b[i]]++;
    // us.insert(a[i]);
  }
  // cout << cnt << endl;
  int ans = 0;
  if (cnt >= k)
  {
    ans++;
  }
  int i = 0;
  int j = m;

  while (j < n)
  {

    mp1[a[i]]--;
    // cout << a[i] << endl;
    // cout << mp1[a[i]] << " " << mp[a[i]] << endl;
    if ((mp[a[i]] > 0) && (mp1[a[i]] < mp[a[i]]))
    {
      cnt--;
    }

    mp1[a[j]]++;
    if (mp[a[j]] >= mp1[a[j]])
    {
      cnt++;
    }
    // cout << i << " " << j << " ";
    // cout << cnt << endl;
    if (cnt >= k)
    {
      ans++;
    }
    i++;
    j++;
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