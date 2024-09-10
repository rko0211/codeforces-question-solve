#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int ans = INT_MIN;
  int cnt = 1;
  for (int i = 1; i < n; i++)
  {
    if (a[i - 1] <= a[i])
    {
      cnt++;
    }
    else
    {
      ans = max(ans, cnt);
      cnt = 1;
    }
  }
  ans = max(ans, cnt);
  cout << ans << endl;
}
int main()
{

  solve();

  return 0;
}