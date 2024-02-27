#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] < 0)
    {
      a[i] *= -1;
      sum += a[i];
    }
    else
    {
      sum += a[i];
    }
  }
  cout << sum << endl;
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