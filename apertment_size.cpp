#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m, k;
  cin >> n >> m >> k;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  multiset<int> ms;
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    ms.insert(x);
  }
  sort(a, a + n);
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    auto it = ms.lower_bound((a[i] - k));
    int val = *it;
    if (abs(a[i] - val) <= k)
    {
      ans++;
      ms.erase(it);
    }
  }
  cout << ans << endl;
}
int main()
{

  solve();

  return 0;
}