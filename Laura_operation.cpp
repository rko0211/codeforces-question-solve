#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int a, b, c;
  cin >> a >> b >> c;
  int maxi = max({a, b, c});
  if (maxi == a)
  {
    cout << 1 << " ";
  }
  else
  {
    cout << 0 << " ";
  }
  if (maxi == b)
  {
    cout << 1 << " ";
  }
  else
  {
    cout << 0 << " ";
  }
  if (maxi == c)
  {
    cout << 1 << endl;
  }
  else
  {
    cout << 0 << endl;
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