#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  vector<int> mp(n + 2);
  for (int i = 0; i < n; i++)
  {
    ++mp[a[i]];
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int sum = a[i];
    for (int j = i + 1; j < n; j++)
    {
      sum += a[j];
      if (sum <= n && mp[sum] > 0)
      {

        ans += mp[sum];
        mp[sum] = 0;
      }
    }
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