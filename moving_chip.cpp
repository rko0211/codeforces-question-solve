#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  bool z = 0;
  bool o = 0;
  int ans = 0;
  int ind;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 1)
    {
      ind = i;
      break;
    }
  }
  for (int i = n - 1; i > ind; i--)
  {
    if (a[i] == 1)
    {
      o = 1;
    }
    else
    {
      if (o)
      {
        ans++;
      }
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