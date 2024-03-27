#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, k, x;
  cin >> n >> k >> x;

  ll a[n + 1];

  a[0] = 0;
  a[1] = 1;
  // cout << a[0] << " ";
  ll prefsum = a[1];
  // cout << a[0] << " " << a[1] << " ";
  for (int i = 2; i <= k; i++)
  {

    a[i] = (prefsum + 1);
    if (a[i] > x)
    {
      cout << "No\n";
      return;
    }
    prefsum += a[i];
    // cout << a[i] << " ";
  }

  if (x >= a[k])
  {
    cout << "Yes\n";
  }
  else
  {
    cout << "No\n";
  }
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
