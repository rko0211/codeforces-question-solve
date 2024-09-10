#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007;
void solve()
{
  int n, x;
  cin >> n >> x;
  int a[n + 1];
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  int dp[n + 1][x + 1];

  for (int i = 1; i <= n; i++)
  {
    for (int sum = 0; sum <= x; sum++)
    {
      // Base case
      if (sum == 0)
      {
        dp[i][sum] = 1;
      }
      else
      {
        int op1 = (a[i] > sum) ? 0 : dp[i][sum - a[i]];
        int op2 = (i == 1) ? 0 : dp[i - 1][sum];
        dp[i][sum] = (op1 + op2) % mod;
      }
    }
  }
  cout << dp[n][x] << endl;
}
int main()
{

  solve();

  return 0;
}