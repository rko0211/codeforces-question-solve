#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    if (y >= 0)
    {
      cout << "YES\n";
    }
    else
    {
      if (abs(y) <= 1)
      {
        cout << "YES\n";
      }
      else
      {
        cout << "NO\n";
      }
    }
  }
}
int main()
{

  solve();

  return 0;
}