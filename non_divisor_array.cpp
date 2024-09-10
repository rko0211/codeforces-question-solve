#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int ans[n + 1];
  int last;
  if (n % 2 == 0)
  {
    last = n / 2;
  }
  else
  {
    last = (n - 1) / 2;
  }

  int val = 1;
  for (int i = n; i >= 1; i--)
  {
    if (last < i)
    {
      ans[i] = val;
    }
    else
    {
      val++;
      ans[i] = val;
      if (i % 2 == 0)
      {
        last = i / 2;
      }
      else
      {
        last = (i - 1) / 2;
      }
    }
  }

  cout << ans[1] << endl;
  for (int i = 1; i <= n; i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
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