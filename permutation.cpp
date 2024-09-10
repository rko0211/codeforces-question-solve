#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  if (n == 1)
  {
    cout << n << endl;
    return;
  }
  if (n <= 3)
  {
    cout << "NO SOLUTION\n";
    return;
  }
  int a[n];

  int i = 1;
  int j = n;

  int x = 0;
  while (i < j)
  {

    a[x] = i;
    x++;
    a[x] = j;
    x++;
    i++;
    j--;
  }
  if (n % 2 == 1)
  {
    // x++;
    a[x] = i;
    swap(a[0], a[n - 1]);
  }
  else
  {
    swap(a[0], a[n - 2]);
  }

  for (int k = 0; k < n; k++)
  {
    cout << a[k] << " ";
  }
  cout << endl;
}
int main()
{

  solve();

  return 0;
}