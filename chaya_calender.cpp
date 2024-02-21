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
  ll ans = a[0];
  for (int i = 1; i < n; i++)
  {
    int x = 1;

    x = ans / a[i] + 1;
    ans = a[i] * x;
  }
  // for (int i = 0; i < n; i++)
  // {
  //   cout << a[i] << " ";
  // }
  // cout << endl;
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