#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int a, b;
  cin >> a >> b;
  int cnt = 0;
  int dif = abs(a - b);
  // if (a < b)
  // {
  int d = min(10, dif);
  if (dif != 0)
    cnt += dif / d;
  if (dif != 0 && dif % d != 0)
  {
    cnt++;
  }
  // }
  cout << cnt << endl;
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