#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a, a + n);
  ll req = 0;
  ll ans = 0;
  for (int i = 0; i < n; i++)
  {
    if (req == a[i])
    {
      req++;
      continue;
    }
    else if (req < a[i])
    {
      ans += (a[i] - req);
      req++;
    }
    else
    {
      ans += (req - a[i]);
      req++;
    }
  }
  cout << ans << endl;
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
