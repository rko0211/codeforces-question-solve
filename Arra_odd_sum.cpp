#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int odd = 0;
  int even = 0;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (x % 2 == 1)
    {
      odd++;
    }
    else
    {
      even++;
    }
  }
  if (odd > 0 && even > 0)
  {
    cout << "YES\n";
    return;
  }
  else if (even > 0)
  {
    cout << "NO\n";
  }
  else
  {
    if (n % 2 == 0)
    {
      cout << "NO\n";
    }
    else
    {
      cout << "YES\n";
    }
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