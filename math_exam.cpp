#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int a, b;
  cin >> a >> b;
  // while ((a >= 2) && (b >= 1))
  // {

  //   a -= 2;

  //   b -= 1;
  // }
  if (((a % 2) == 0) && ((b % 2) == 0))
  {
    cout << "YES\n";
  }
  else if ((b % 2) == 1)
  {
    if (a % 2 == 0 && a >= 2)
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