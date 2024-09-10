#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, x;
  cin >> n >> x;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int val = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > x)
    {
      val += (a[i] - x);
      a[i] = x;
    }
  }
  sort(a, a + n);
  reverse(a, a + n);
  for (int i = 0; i < n; i++)
  {
    if (a[i] < x)
    {
      int d = (x - a[i]);
      if (val >= d)
      {
        val -= d;
        a[i] = x;
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] >= x)
    {
      ans++;
    }
  }

  cout << ans << endl;
}
int main()
{
  // your code goes here

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
