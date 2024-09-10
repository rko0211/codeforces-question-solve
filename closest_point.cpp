#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  if (n == 2)
  {
    if (abs(v[0] - v[1]) > 1)
    {
      cout << "YES\n";
      return;
    }
    else
    {
      cout << "NO\n";
      return;
    }
  }
  else
  {
    cout << "NO\n";
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