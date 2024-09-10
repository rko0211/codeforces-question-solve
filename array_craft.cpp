#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, x, y;
  cin >> n >> x >> y;
  int a[n];

  for (int i = y-1; i < x; i++)
  {
    a[i] = 1;
  }
  int t = -1;
  for (int i = 0; i < y - 1; i++)
  {
    a[i] = t;
    t *= -1;
  }
  t = -1;
  for (int i = x; i < n; i++)
  {
    a[i] = t;
    t *= -1;
  }
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  // int v1 = 0;
  // for (int i = 0; i < n; i++)
  // {
  //   v1 += a[i];
  //   cout << v1 << " ";
  // }
  // cout << endl;
  // int v2 = 0;
  // int suf[n];
  // for (int i = n - 1; i >= 0; i--)
  // {
  //   v2 += a[i];
  //   suf[i] = v2;
  //   // cout << v2 << " ";
  // }
  // for (int i = 0; i < n; i++)
  // {

  //   cout << suf[i] << " ";
  // }
  // cout << endl;
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