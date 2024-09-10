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

  if (n == 2)
  {
    cout << abs(a[0] + a[1]) << endl;
    return;
  }
  // Alice
  ll mini = 0;
  ll curr = a[0];
  ll sum = a[0];
  for (int i = 1; i < n; i++)
  {
    sum += a[i];
    curr += a[i];
    mini = min(curr, mini);
    curr = min(a[i], curr);
  }

  // Bob
  ll ans;

  ans = sum + 2 * abs(mini);

  cout << ans << endl;
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