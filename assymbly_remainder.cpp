#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n - 1];
  int maxi = INT_MIN;
  for (int i = 0; i < (n - 1); i++)
  {
    cin >> a[i];
    maxi = max(maxi, a[i]);
  }

  int ans[n];
  ans[0] = a[0] + 1;
  ans[1] = (ans[0] * maxi + a[0]);
  for (int i = 2; i < n; i++)
  {
    ans[i] = (ans[i - 1] + a[i - 1]);
  }
  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
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