#include <bits/stdc++.h>
using namespace std;
void solve()
{

  int n, k;
  cin >> n >> k;
  if (n == k)
  {
    for (int i = 0; i < n; i++)
    {
      cout << 1 << " ";
    }
    cout << endl;
    return;
  }
  if (k == 1)
  {
    cout << n << " ";
    for (int i = 1; i < (n); i++)
    {
      cout << i << " ";
    }
    cout << endl;
    return;
  }
  else
  {
    cout << -1 << endl;
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