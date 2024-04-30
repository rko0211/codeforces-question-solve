#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  ll b[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }

  int ans = 0;
  int x = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[x] <= b[i])
    {
      x++;
    }
    else
    {
      ans++;
    }
  }
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