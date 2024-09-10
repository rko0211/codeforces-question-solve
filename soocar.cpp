#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int x1, y1;
  cin >> x1 >> y1;
  int x2, y2;
  cin >> x2 >> y2;
  if (x1 > y1)
  {
    if (x2 < y2)
    {
      cout << "NO\n";
      return;
    }
  }
  if (x1 < y1)
  {
    if (x2 > y2)
    {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
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