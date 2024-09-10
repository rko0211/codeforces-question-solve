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
  unordered_map<int, bool> mp;
  mp[a[0]] = true;
  for (int i = 1; i < n; i++)
  {
    if (mp[(a[i] - 1)] == false && mp[(a[i] + 1)] == false)
    {
      cout << "NO\n";
      return;
    }
    else
    {
      mp[a[i]] = true;
    }
  }
  cout << "YES\n";
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