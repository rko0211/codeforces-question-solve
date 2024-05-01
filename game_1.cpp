#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  long int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  long int b[m];
  for (int i = 0; i < m; i++)
    cin >> b[i];
  long long int ans = 0;
  if (n < 4 || m < 4 || (m + n) < 11)
  {
    cout << -1 << endl;
    return;
  }
  sort(a, a + n);
  reverse(a, a + n);
  sort(b, b + m);
  reverse(b, b + m);
  for (int i = 0; i < 4; i++)
  {
    ans += b[i];
    ans += a[i];
  }
  int rem = 0;
  int i = 4;
  int j = 4;
  //   int rem =0;
  while (i < n || j < m)
  {
    if (rem == 3)
    {
      break;
    }
    long long int maxi1 = INT_MIN, maxi2 = INT_MIN;
    if (i < n)
    {
      maxi1 = a[i];
    }
    if (j < m)
    {
      maxi2 = b[j];
    }
    if (maxi1 > maxi2)
    {
      ans += maxi1;
      i++;
    }
    else
    {
      ans += maxi2;
      j++;
    }
    rem++;
  }
  cout << ans << endl;
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
