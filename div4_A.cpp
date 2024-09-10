#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int x, y;
  cin >> x >> y;
  cout << min(x, y) << " " << max(x, y) << endl;
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