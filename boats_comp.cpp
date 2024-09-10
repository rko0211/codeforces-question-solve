#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a, a + n);
  int ans = 0;
  for (int i = 1; i <= 2 * n; i++)
  {
    int wt = i;
    int cnt = 0;
    int j = 0;
    int k = n - 1;
    while (j < k)
    {
      int sum = (a[j] + a[k]);
      if (sum == wt)
      {
        cnt++;
        j++;
        k--;
      }
      else if (sum > wt)
      {
        k--;
      }
      else
      {
        j++;
      }
    }
    ans = max(ans, cnt);
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