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
  ll dp[n];
  ll maxi = INT_MIN;
  for (int i = n - 1; i >= 0; i--)
  {
    ll curr = a[i];
    if ((i + a[i]) < n)
    {
      curr += dp[(i + a[i])];
    }
    dp[i] = curr;
    maxi = max(maxi, dp[i]);
  }
  cout << maxi << endl;
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