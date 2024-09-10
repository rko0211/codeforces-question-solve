#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<int> ans;
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    mp[a[i]]++;
  }
  int mex = 0;
  for (int i = 0; i <= n; i++)
  {
    if (mp[i] > 0)
    {
      mex++;
    }
    else
    {
      break;
    }
  }
  int sz = mp.size();
  int i = 0;
  while (i < n)
  {
    unordered_set<int> us;
    int t = mex;
    while (i < n && us.size() < mex)
    {
      mp[a[i]]--;
      us.insert(a[i]);
      cout << mp[a[i]] << " " << i << endl;
      if (mp[a[i]] == 0)
      {
        if (t > a[i])
        {
          t = min(t, a[i]);
          // cout << t << " ";
        }
      }
      else
      {
        // cout << ". ";
      }

      i++;
    }
    // cout << i << endl;
    // cout << mex << endl;
    if (us.size() != mex)
    {
      ans.push_back(0);
    }
    else
    {
      ans.push_back(mex);
    }
    mex = t;
    us.clear();
    i++;
  }
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
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