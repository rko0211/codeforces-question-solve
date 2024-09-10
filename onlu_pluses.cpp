#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  int sum = 0;
  int maxi = 5;
  while (maxi > 0)
  {
    sort(a, a + 3);
    a[0] += 1;
    maxi--;
  }

  int ans = a[0] * a[1] * a[2];
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