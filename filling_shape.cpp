#include <bits/stdc++.h>
using namespace std;
int f(int n)
{
  // rECURSION sOLUTION
  // if (n == 0)
  // {
  //   return 1;
  // }

  // int res = 2 * f(n - 2, dp);
  // return res;
  // Iterative Dp
  vector<int> dp(n + 1, 0);
  dp[0] = 1;
  for (int i = 2; i <= n; i += 2)
  {
    dp[i] = 2 * dp[i - 2];
  }
  return dp[n];
}
void solve()
{
  int n;
  cin >> n;
  if (n % 2 == 1)
  {
    cout << 0 << endl;
  }
  else
  {
    // vector<int> dp(n, -1);
    cout << f(n) << endl;
  }
}
int main()
{

  solve();

  return 0;
}