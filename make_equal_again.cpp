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

  if (n == 1)
  {
    cout << 0 << endl;
    return;
  }

  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    if (a[i] == a[j])
    {
      j--;
      if (a[i] == a[i + 1])
      {
        i++;
      }
      else
      {
        break;
      }
    }
    else
    {
      if (a[i] == a[i + 1])
      {
        i++;
      }
      else
      {
        break;
      }
    }
  }

  int ans = (j - i);
  i = 0;
  j = n - 1;
  while (i < j)
  {
    if (a[i] == a[j])
    {
      i++;
      if (a[j] == a[j - 1])
      {
        j--;
      }
      else
      {
        break;
      }
    }
    else
    {
      if (a[j] == a[j - 1])
      {
        j--;
      }
      else
      {
        break;
      }
    }
  }
  ans = min(ans, (j - i));
  if (ans < 0)
  {
    ans = 0;
  }
  cout << ans << endl;
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