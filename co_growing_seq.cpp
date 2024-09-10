#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int ans[n];
  ans[0] = 0;
  int ind = 1;
  for (int i = ind; i < n; i++)
  {
    ll prevval = a[i - 1];
    ll currval = a[i];
    ll val = 0;
    int p = 0;
    while (currval > 0 || prevval > 0)
    {
      if (((prevval & 1) == 1) && ((currval & 1) == 0))
      {

        val += pow(2, p);
      }
      p++;
      prevval >>= 1;
      currval >>= 1;
    }
    a[i] ^= val;
    ans[i] = val;
    // cout << a[i] << endl;
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