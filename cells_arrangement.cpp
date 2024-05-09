#include <bits/stdc++.h>
using namespace std;
void solve()
{

  int n;
  cin >> n;
  for (int i = 1; i <= n - 2; i++)
  {
    cout << i << ' ' << i << "\n";
  }
  cout << n - 1 << ' ' << n << "\n"
       << n << ' ' << n << "\n";
  cout << "\n";
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