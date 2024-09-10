#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;

  unordered_map<long, int> m;
  for (int i = 0; i < n; i++)
  {
    long c;
    cin >> c;
    m[c]++;
  }
  for (auto &it : m)
  {
    if (it.second >= 2)
    {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
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