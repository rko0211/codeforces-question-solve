#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m, k;
  cin >> n >> m >> k;
  int v = n / m;
  if (n % m != 0)
  {
    v++;
  }

  int rem = (n - v);
  if (rem <= k)
  {
    cout << "NO\n";
  }
  else
  {
    cout << "YES\n";
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