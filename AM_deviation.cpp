#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int T;
  cin >> T;
  while (T--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((a + c - 2 * b) % 3 == 0 ? 0 : 1) << "\n";
  }
  return 0;
}