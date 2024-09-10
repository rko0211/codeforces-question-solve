#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int a, b, x, y;
  cin >> a >> b >> x >> y;
  int ans = abs(a - b);
  int t1 = abs(a - x) + abs(y - b);
  int t2 = abs(a - y) + abs(x - b);
  cout << min({ans, t1, t2}) << endl;
}
int main()
{

  solve();

  return 0;
}