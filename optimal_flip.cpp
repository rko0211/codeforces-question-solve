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

  ll withou_opt = 0;
  ll v1 = n;
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
    {
      withou_opt += v1;
      v1--;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 1)
    {
      a[i]++;
      break;
    }
  }

  ll ans = 0;
  ll val = n;
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
    {
      ans += val;
      val--;
    }
  }
  cout << max(withou_opt, ans) << endl;
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