#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll a, b;
  cin >> a >> b;
  if (a == b)
  {
    cout << 0 << " " << 0 << endl;
    return;
  }
  ll dif = abs(a - b);
  cout << dif << " " << min(a % dif, dif - a % dif) << endl;
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