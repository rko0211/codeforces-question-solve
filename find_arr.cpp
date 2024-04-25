#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  a[0] = 2;
  for (int i = 1; i < n; i++)
  {
    a[i] = a[i - 1] + 1;
  }
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
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