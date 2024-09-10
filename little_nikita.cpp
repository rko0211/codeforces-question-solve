#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  if (n >= m && (n - m) % 2 == 0)
  {
    cout << "Yes\n";
  }
  else
  {
    cout << "No\n";
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