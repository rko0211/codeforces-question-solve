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
  map<ll, vector<int>> m;
  for (int i = 0; i < n; i++)
  {
    m[a[i]].push_back(i);
  }
  // for (auto &it : m)
  // {
  //   cout << it.first << "-->";
  //   for (int j = 0; j < it.second.size(); j++)
  //   {
  //     cout << it.second[j] << " ";
  //   }
  //   cout << endl;
  // }
  // cout << endl;
  int ans = 0;

  for (int i = 0; i < n; i++)
  {
    ll val;
    if ((a[i] - 3) != 0)
      val = (a[i] / (a[i] - 3));
    else
    {
      val = 0;
    }
    for (int j = 0; j < m[val].size(); j++)
    {
      if (m[val][j] > i)
      {
        ans++;
      }
    }
  }
  cout << ans << endl;
}
int main()
{
  // your code goes here

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
