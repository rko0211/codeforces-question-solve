
#include <algorithm>
#include <iostream>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 1; i < n - 1; i++)
  {

    if (a[i - 1] > a[i] || a[i] < 0 || a[i - 1] < 0 || a[i + 1] < 0)
    {

      cout << "NO\n";
      return;
    }
    else
    {

      a[i] -= ((2 * min(a[i - 1], a[i + 1])));

      ll t = (min(a[i - 1], a[i + 1]));
      a[i + 1] -= t;
      a[i - 1] -= t;
    }
  }
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    // cout << a[i] << " ";
    if (a[i] == 0)
    {
      cnt++;
    }
  }
  // cout << endl;
  if (cnt == n)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
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