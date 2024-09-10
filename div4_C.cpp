#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int m1 = max(a, b);
  int m2 = min(a, b);
  int m3 = max(c, d);
  int m4 = min(c, d);

  if ((m1 < m3 && m1 > m4))
  {
    if (m2 < m3 && m2 < m4)
    {
      cout << "YES\n";
      return;
    }
  }
  if ((m3 < m1 && m3 > m2))
  {
    if ((m4 < m1 && m4 < m2))
    {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    solve();
    /* code */
  }

  return 0;
}