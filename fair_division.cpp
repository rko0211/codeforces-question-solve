#include <bits/stdc++.h>
using namespace std;
void solve()
{

  int n;
  cin >> n;
  int a[n];
  int sum = 0;
  int o = 0;
  int t = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] == 1)
      o++;
    else
      t++;
    sum += a[i];
  }
  if (sum % 2 == 1)
  {
    cout << "NO\n";
    return;
  }
  if (o == 0)
  {
    if (t % 2 == 0)
    {
      cout << "YES\n";
      return;
    }
    else
    {
      cout << "NO\n";
      return;
    }
  }
  else
  {
    cout << "YES\n";
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