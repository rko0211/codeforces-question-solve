#include <bits/stdc++.h>
using namespace std;
void solve()
{
  long int a, b, c;
  cin >> a >> b >> c;
  long int total = 2 * abs(a - b);
  long int dif = abs(a - b);
  long int val1 = (c - dif);
  long int val2 = c + dif;
  if ((a >= 1 && a <= total) && (b >= 1 && b <= total) && (c >= 1 && c <= total))
  {
    if (val1 >= 1 && val1 <= total)
    {
      if (val1 != a && val1 != b)
      {
        cout << val1 << endl;
        return;
      }
    }
    if (val2 >= 1 && val2 <= total)
    {
      if (val2 != a && val2 != b)
      {
        cout << val2 << endl;
        return;
      }
    }
  }
  cout << -1 << endl;
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