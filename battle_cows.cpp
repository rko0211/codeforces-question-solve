#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n, k;
  cin >> n >> k;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int ind = -1;
  ll val = a[k - 1];
  for (int i = 0; i < (k - 1); i++)
  {
    if (a[i] > val)
    {
      swap(a[i], a[k - 1]);
      ind = i;
      break;
    }
  }

  ll ans = 0;
  ll c1 = 0;
  ll x = a[0];
  for (int i = 1; i < n; i++)
  {
    x = max(x, a[i]);
    if (x == val)
    {
      c1++;
    }
  }

  if (ind != -1)
    swap(a[ind], a[k - 1]);
  val = a[k - 1];
  for (int i = 0; i < (k - 1); i++)
  {
    if (a[i] < val)
    {
      swap(a[i], a[k - 1]);
      ind = i;
      break;
    }
  }

  ll c2 = 0;
  x = a[0];
  for (int i = 1; i < n; i++)
  {
    x = max(x, a[i]);
    if (x == val)
    {
      c2++;
    }
  }
  ans = max(c1, c2);
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