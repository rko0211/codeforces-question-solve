#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n, m;
  cin >> n >> m;
  ll a[n], b[m];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int j = 0; j < m; j++)
    cin >> b[j];
  sort(b, b + m);
  sort(a, a + n);
  int l1 = 0, l2 = 0;
  int h1 = n - 1;
  int h2 = m - 1;
  ll ans = 0;
  while (l1 <= h1)
  {
    if (abs(a[l1] - b[l2]) < abs(a[l1] - b[h2]))
    {
      ans += (abs(a[l1] - b[h2]));
      l1++;
      h2--;
    }
    else
    {
      if (abs(a[l1] - b[l2]) < abs(a[h1] - b[l2]))
      {
        ans += abs(a[h1] - b[l2]);
        h1--;
        l2++;
      }
      else
      {
        ans += abs(a[l1] - b[l2]);
        l1++;
        l2++;
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