#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll a, b;
  cin >> a >> b;
  if (a == 1 && b == 1)
  {
    cout << "No\n";
    return;
  }
  // if (a >= b)
  // {
  if (a % 2 == 0)
  {
    int c1 = a / 2;
    if (c1 > 0 && (c1 + b) != a && c1 != b)
    {
      cout << "Yes\n";
      return;
    }
  }

  if (b % 2 == 0)
  {
    ll c2 = b / 2;
    if (c2 > 0 && (c2 + a) != b && c2 != a)
    {
      cout << "Yes\n";
      return;
    }
  }

  cout << "No\n";
  return;

  // }
  // else
  // {

  // }
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