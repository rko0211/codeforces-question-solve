#include <bits/stdc++.h>
using namespace std;
void solve()
{

  int n, m;
  cin >> n >> m;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  map<int, int> m1;
  for (int i = 0; i < n; i++)
  {
    m1[a[i]]++;
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