#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  ll b[n];
  for (int j = 0; j < n; j++)
    cin >> b[j];
  sort(a, a + n);
  sort(b, b + n);
  // reverse(b, b + n);

  // for (int i = 0; i < n; i++)
  // {
  //   cout << a[i] << " ";
  // }
  // cout << endl;
  // for (int j = 0; j < n; j++)
  // {
  //   cout << b[j] << " ";
  // }
  // cout << endl;

  int i = 0;
  int j = n / 2;
  ll ans = LLONG_MAX;
  while (j < n)
  {
    // cout << a[i] << " " << b[j] << endl;
    ans = min(ans, abs(a[i] - b[j]));
    i++;
    j++;
  }
  // cout << i << endl;
  j = 0;
  while (i < n)
  {
    // cout << a[i] << " " << b[j] << endl;
    ans = min(ans, abs(a[i] - b[j]));
    i++;
    j++;
  }
  ll res = LLONG_MAX;
  for (int i = n - 1; i >= 0; i--)
  {
    res = min(res, abs(a[i] - b[i]));
  }
  cout << max(res, ans) << endl;

  // else
  // {
  //   int i = 0;
  //   int j = n / 2;
  //   ll ans = LLONG_MAX;
  //   while (j < n)
  //   {
  //     ans = min(ans, abs(a[i] - b[j]));
  //     i++;
  //     j++;
  //   }
  //   cout << i << endl;
  //   j = 0;
  //   while (i < n)
  //   {
  //     ans = min(ans, abs(a[i] - b[j]));
  //     i++;
  //     j++;
  //   }
  //   cout << ans << endl;
  // }
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