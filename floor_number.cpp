#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, x;
  cin >> n >> x;
  if (n <= 2)
  {
    cout << 1 << endl;
    return;
  }
  n -= 2;
  int cnt = 1;
  int d = n / x;
  cnt += d;
  if (n % x != 0)
  {
    cnt++;
  }
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