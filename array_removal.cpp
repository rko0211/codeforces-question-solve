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
  sort(a, a + n);
  ll orval = 0;
  for (int i = 0; i < n; i++)
  {
    orval |= a[i];
  }
  // cout << orval << endl;
  int x = 0;
  ll val = -1;
  while (orval > 0)
  {
    if ((orval & 1) == 0)
    {
      val = pow(2, x);
      break;
    }
    x++;
    orval = orval / 2;
  }
  if (val == -1)
  {
    val = pow(2, x);
  }
  // cout << val << endl;
  int ind = lower_bound(a, a + n, val) - a;

  // cout << ind << endl;
  cout << (n - ind) << endl;
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
