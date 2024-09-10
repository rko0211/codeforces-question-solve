#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, m, k;
  cin >> n >> m >> k;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int b[m];
  for (int i = 0; i < m; i++)
    cin >> b[i];
  sort(a, a + n);
  sort(b, b + m);
  ll sum1 = 0, sum2 = 0;
  for (int i = 0; i < n; i++)
  {
    sum1 += a[i];
  }

  if (k % 2 == 1)
  {
    if (a[0] < b[m - 1])
    {
      sum1 += b[m - 1];
      sum1 -= a[0];
    }

    cout << sum1 << endl;
  }
  else
  {

    if (a[0] < b[m - 1])
    {
      sum1 += b[m - 1];

      sum1 -= a[0];
    }
    if (a[0] < a[n - 1] && (a[n - 1] > b[m - 1]))
    {
      sum1 -= a[n - 1];
      sum1 += a[0];
    }
    else
    {
      sum1 -= b[m - 1];
      sum1 += a[0];
    }
    cout << sum1 << endl;
  }

  // cout << sum1 << endl;
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