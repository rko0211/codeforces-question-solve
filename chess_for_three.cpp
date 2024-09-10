#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int p1, p2, p3;
  cin >> p1 >> p2 >> p3;
  if ((p1 + p2 + p3) % 2 == 1)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << min(p1 + p2, (p1 + p2 + p3) / 2) << endl;
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