#include <bits/stdc++.h>
using namespace std;
#
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a, a + n);
  int maxi = a[n - 1];
  int ans = INT_MAX;
  while (a[0] != a[n - 1])
  {
    a[0] = (a[0] & a[n - 1]);
    a[n - 1] = (a[0] & a[n - 1]);
    sort(a, a + n);
  }
  cout << a[0] << endl;
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