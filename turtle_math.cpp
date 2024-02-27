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
  bool flag = false;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 1)
    {
      flag = true;
    }
    sum += a[i];
  }
  bool flag2 = false;
  for (int i = 0; i < n; i++)
  {
    if ((sum - a[i]) % 3 == 0)
    {
      flag2 = true;
      break;
    }
  }

  if (sum % 3 == 0)
  {
    cout << "0\n";
    return;
  }
  else if (sum % 3 == 1)
  {
    if (flag)
    {
      cout << "1\n";
      return;
    }
    else
    {
      if (flag2)
      {
        cout << "1\n";
        return;
      }
      else
      {
        cout << "2\n";
        return;
      }
    }
  }
  else if (sum % 3 == 2)
  {
    cout << "1\n";
    return;
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