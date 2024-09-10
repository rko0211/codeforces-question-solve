#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, k;
  cin >> n >> k;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a, a + n);
  for (int i = 0; i < n; i++)
  {
    ll val = a[n - 1] - a[i];
    val /= k;
    a[i] += (k * val);
  }
  ll ans = LLONG_MAX;
  sort(a, a + n);
  priority_queue<int, vector<int>, greater<int>> pq;
  ans = min(ans, (a[n - 1] - a[0]));

  for (int i = 0; i < n; i++)
  {
    pq.push(a[i]);
  }
  ll mx = a[n - 1];
  for (int i = 0; i < n; i++)
  {
    if (a[i] == pq.top())
    {
      pq.pop();
    }
    a[i] += k;
    ans = min(ans, (a[i] - pq.top()));
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
