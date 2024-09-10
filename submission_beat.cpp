#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  unordered_map<int, int> mp;
  int maxi = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    mp[a[i]]++;
    maxi = max(maxi, a[i]);
  }
  if (mp[maxi] % 2 == 1)
  {
    cout << "YES\n";
    return;
  }
  else
  {
    for (auto &it : mp)
    {
      if (it.second % 2 == 1)
      {
        cout << "YES\n";
        return;
      }
    }

    cout << "NO\n";
  }
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