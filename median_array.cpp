#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n + 1];
  a[0] = 0;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  sort(a, a + n + 1);
  int mid = n / 2;
  if (n % 2 != 0)
  {
    mid++;
  }
  // for (int i = 0; i < n; i++)
  // {
  //   cout << a[i] << " ";
  // }
  // cout << endl;
  int ans = 0;
  for (int i = mid; i < n + 1; i++)
  {
    if ((a[i] + 1) <= (a[i + 1]))
    {
      ans++;
      break;
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