#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, f, k;
  cin >> n >> f >> k;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int val = a[f - 1];
  sort(a, a + n);
  reverse(a, a + n);
  int fr = -1, l = -1;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == val)
    {
      if (fr == -1)
      {
        fr = i;
        l = i;
      }
      else
      {
        l = i;
      }
    }
  }

  if ((l + 1) <= k)
  {
    cout << "YES\n";
  }
  else if ((l + 1) > k && (fr + 1) <= k)
  {
    cout << "MAYBE\n";
  }
  else if (k < (fr + 1))
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