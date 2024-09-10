#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int a[3];
  for (int i = 0; i < 3; i++)
  {
    cin >> a[i];
  }
  sort(a, a + 3);
  if (a[2] == (a[0] + a[1]))
  {
    cout << "YES\n";
  }
  else if (a[0] == a[1])
  {
    if (a[2] % 2 == 0)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
  else if (a[0] == a[2])
  {
    if (a[1] % 2 == 0)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
  else if (a[1] == a[2])
  {
    if (a[0] % 2 == 0)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
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