#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 1; i < n - 1; i++)
  {
    int lo = -1;
    int hi = -1;
    for (int j = 0; j < i; j++)
    {
      if (a[j] < a[i])
      {
        lo = j;
        break;
      }
    }

    for (int j = i + 1; j < n; j++)
    {
      if (a[i] > a[j])
      {
        hi = j;
        break;
      }
    }

    if (hi != -1 && lo != -1)
    {
      cout << "YES\n";
      cout << lo + 1 << " " << i + 1 << " " << hi + 1 << endl;
      return;
    }
  }
  cout << "NO\n";
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    /* code */
    solve();
  }

  return 0;
}