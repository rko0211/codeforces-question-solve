#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int a[4];
  for (int i = 0; i < 4; i++)
  {
    cin >> a[i];
  }
  int ans = 0;
  int x = 0, y = 0;
  if ((a[0] > a[2]))
  {
    x++;
  }
  else if (a[0] < a[2])
  {
    y++;
  }
  if (a[1] > a[3])
  {
    x++;
  }

  else if (a[1] < a[3])
  {
    y++;
  }
  if (x > y)
  {
    ans++;
  }

  x = 0, y = 0;
  if ((a[0] > a[3]))
  {
    x++;
  }
  else if (a[0] < a[3])
  {
    y++;
  }
  if (a[1] > a[2])
  {
    x++;
  }

  else if (a[1] < a[2])
  {
    y++;
  }
  if (x > y)
  {
    ans++;
  }

  x = 0, y = 0;
  if ((a[1] > a[3]))
  {
    x++;
  }
  else if (a[1] < a[3])
  {
    y++;
  }
  if (a[0] > a[2])
  {
    x++;
  }

  else if (a[0] < a[2])
  {
    y++;
  }
  if (x > y)
  {
    ans++;
  }

  x = 0, y = 0;
  if ((a[1] > a[2]))
  {
    x++;
  }
  else if (a[1] < a[2])
  {
    y++;
  }
  if (a[0] > a[3])
  {
    x++;
  }

  else if (a[0] < a[3])
  {
    y++;
  }
  if (x > y)
  {
    ans++;
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