#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  long int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  unordered_map<long, int> m;
  for (int i = 0; i < n; i++)
  {
    m[a[i]]++;
  }
  sort(a, a + n);
  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    if (m[i] == 0)
    {
      // cout << a[i - 1] << " ";
      long int lo, hi;
      if (a[i - 1] < 10)
      {
        lo = 1;
        hi = a[i - 1];
      }
      else
      {
        lo = 10;
        hi = a[i - 1];
      }

      // Binary search
      bool flag = false;
      while (lo <= hi)
      {
        long int mid = hi - (hi - lo) / 2;
        if ((a[i - 1] % mid) == i)
        {
          flag = true;
          break;
        }
        else if ((a[i - 1] % mid) > i)
        {
          lo = mid + 1;
        }
        else
        {
          // (a[i - 1] % mid) < i
          hi = mid - 1;
        }
      }
      if (flag == true)
      {
        ans++;
      }
      else
      {
        cout << -1 << endl;
        return;
      }
    }
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