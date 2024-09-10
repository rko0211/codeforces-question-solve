#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, k;
  cin >> n >> k;

  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int ans[n] = {0};
  map<int, vector<int>> mp;

  for (int i = 0; i < n; i++)
  {
    mp[a[i]].push_back(i);
  }
  vector<int> rem;
  for (auto &it : mp)
  {
    if (it.second.size() >= k)
    {
      int x = 1;
      for (auto &itr : it.second)
      {
        if (x > k)
        {
          break;
        }
        ans[itr] = x;
        x++;
      }
    }
    else
    {
      for (auto &itr : it.second)
      {
        rem.push_back(itr);
      }
    }
  }
  int x = 1;
  int lastInd = rem.size() - (rem.size() % k);
  for (int i = 0; i < lastInd; i++)
  {
    ans[rem[i]] = x;
    x++;
    if (x > k)
    {
      x = 1;
    }
  }

  for (int i = 0; i < n; i++)
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