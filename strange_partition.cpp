#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll x;
  cin >> x;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  ll maxi = 0;
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += a[i];
    maxi += ((a[i] + x - 1) / x);
  }

  cout << ((sum + x - 1) / x) << " " << maxi << endl;
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