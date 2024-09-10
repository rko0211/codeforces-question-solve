#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int64_t s1 = 0;
  int64_t s2 = 0;
  for (int i = 0; i < n; i++)
  {
    int64_t d1 = s1 + a[i];
    int64_t d2 = s2 + a[i];
    int64_t d3 = abs(s1 + a[i]);
    int64_t d4 = abs(s2 + a[i]);

    s1 = max({d1, d2, d3, d4});
    s2 = min({d1, d2, d3, d4});
  }
  cout << max(abs(s1), abs(s2)) << endl;
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