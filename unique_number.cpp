#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  if (n > 45)
  {
    cout << -1 << endl;
    return;
  }
  string ans = "";
  int sum = 0;
  ans += "1";
  sum = 1;
  if (n < 10)
  {
    cout << n << endl;
    return;
  }
  for (int i = 2; i <= 9; i++)
  {
    if (sum == n)
    {
      break;
    }
    if ((n - sum) > 9)
    {
      sum += i;
      ans += to_string(i);
    }
    else
    {
      ans += to_string(n - sum);
      break;
    }
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