#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = 0;
  int mid = n / 2 + n % 2;
  int zero = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '0')
    {
      zero++;
      if (zero == 0)
      {
        if (abs(mid - (i)) < abs(mid - ans))
        {
          ans = i;
        }
      }
    }
    else
    {
      zero--;
      if (zero >= 0)
      {
        if (abs(mid - (i)) < abs(mid - ans))
        {
          ans = i;
        }
      }
    }
  }
  if (zero == n)
  {
    cout << n << endl;
    return;
  }
  cout << (ans + 1) << endl;
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