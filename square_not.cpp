#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (n == 2)
  {
    cout << "No\n";
    return;
  }

  int one = 0;
  int zero = 0;

  for (int i = 0; i < n; i++)
  {
    if (s[i] == '1')
    {
      one++;
    }
    else
    {
      zero++;
    }
  }

  if (one % 4 == 0)
  {
    if (zero == ((one / 4 - 1) * (one / 4 - 1)))
    {
      cout << "Yes\n";
    }
    else
    {
      cout << "No\n";
    }
  }
  else
  {
    cout << "No\n";
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