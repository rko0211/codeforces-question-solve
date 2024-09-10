#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll x, n;
  cin >> x >> n;
  ll a[4];
  a[0] = x;
  if (x % 2 == 0)
    a[1] = x - 1;
  else
    a[1] = x + 1;

  if (a[1] % 2 == 0)
  {
    a[2] = (a[1] - 2);
  }
  else
  {
    a[2] = (a[1] + 2);
  }
  if (a[2] % 2 == 0)
  {
    a[3] = a[2] - 3;
  }
  else
  {
    a[3] = a[2] + 3;
  }

  if (n < 4)
  {
    cout << a[n] << endl;
    return;
  }
  for (int i = 0; i < 4; i++)
  {
    if ((n - i) % 4 == 0)
    {
      ll no_ele = (((n - i) / 4) + 1);
      if (i % 2 == 0)
      {
        cout << a[i] << endl;
        return;
      }
      else
      {
        ll cd1, cd3;
        if (x % 2 == 0)
        {
          cd1 = -4;
          cd3 = 4;
        }
        else
        {
          cd1 = 4;
          cd3 = -4;
        }
        if (i == 1)
        {
          cout << (a[i] + ((no_ele - 1) * cd1)) << endl;
          return;
        }
        if (i == 3)
        {
          cout << (a[i] + ((no_ele - 1) * cd3)) << endl;
          return;
        }
      }
    }
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