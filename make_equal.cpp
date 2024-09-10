#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  ll res = 2;
  while (1)
  {
    set<ll> us;
    for (int i = 0; i < n; i++)
    {
      us.insert(a[i] % res);
    }
    if ((ll)us.size() == 2)
    {
      break;
    }
    res *= 2;
  }
  cout << res << endl;
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