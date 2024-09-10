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

  if (n == 1)
  {
    cout << "YES\n";
    return;
  }

  if (a[0] != a[n - 1])
  {
    cout << "NO\n";
    return;
  }

  ll val = a[0];
  for (int i = 1; i < n - 1; i++)
  {
    if (val > a[i])
    {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
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