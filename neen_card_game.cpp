#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    m[a[i]]++;
  }
  int cnt = 0;
  for (auto &it : m)
  {
    if (it.second == 2)
    {
      cnt++;
    }
  }
  cout << cnt << endl;
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