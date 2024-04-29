#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n + 1];
  a[0] = -1;
  for (int i = 1; i <= n; i++)
    cin >> a[i];

  int ans = INT_MAX;
  for (int i = 1; i <= n; i++)
  {
    unordered_set<int> us;
    us.insert(i);
    int ind1 = a[i];
    us.insert(ind1);
    int ind2 = a[ind1];
    us.insert(ind2);
    int v = us.size();
    ans = min(ans, v);
    us.clear();
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