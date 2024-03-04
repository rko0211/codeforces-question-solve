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
  unordered_set<int> us;
  for (int i = 0; i < n; i++)
  {
    us.insert(a[i]);
  }
  if (us.size() == 1)
  {
    cout << -1 << endl;
    return;
  }
  sort(a, a + n);

  int gcd = 0;
  int mini = a[0];
  for (int i = 1; i < n; i++)
  {
    gcd = __gcd(gcd, (a[i] - mini));
  }

  cout << gcd << endl;
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