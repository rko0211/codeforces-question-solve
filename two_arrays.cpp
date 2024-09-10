#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n], b[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int j = 0; j < n; j++)
  {
    cin >> b[j];
  }
  // bool flag = true;
  sort(a, a + n);
  sort(b, b + n);
  for (int i = 0; i < n; i++)
  {
    if ((b[i] - a[i]) > 1 || (a[i] > b[i]))
    {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
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