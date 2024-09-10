#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    a[i] = (i + 1);
  int b[n];
  for (int j = 0; j < n; j++)
    b[j] = (j + 1);
  sort(a, a + n);
  sort(b, b + n);

  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;

  int x = n / 2 + 1;
  while (x <= n)
  {
    cout << x << " ";
    x++;
  }
  int j = 1;
  for (int j = 1; j < (n / 2 + 1); j++)
  {
    cout << j << " ";
  }
  cout << endl;
}
int main()
{
  // your code goes here

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
