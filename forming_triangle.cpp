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

  long long int sum = 0;
  long long ans = 0;
  for (auto &it : m)
  {
    long long int cnt = it.second;
    if (cnt >= 3)
    {
      ans += cnt * (cnt - 1) * (cnt - 2) / 6;
    }
    if (cnt >= 2)
    {
      ans += cnt * (cnt - 1) / 2 * sum;
    }
    sum += cnt;
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