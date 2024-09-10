#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll dp[300005][2], pre[300005][2], suf[300005][2], a[300005], b[300005];
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
      a[i] = b[i] = 0;
    for (int i = 1; i <= k; i++)
    {
      int x, y;
      cin >> x >> y;
      a[x] = y;
      b[y] = x;
    }
    for (int i = 0; i <= n + 1; i++)
    {
      dp[i][0] = dp[i][1] = pre[i][0] = pre[i][1] = suf[i][0] = suf[i][1] = 0;
    }
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
      dp[i][0] = (dp[i - 1][0] + dp[i - 1][1]) % mod;
      if (a[i])
      {
        if (a[i] != i && b[i] == 0)
        {
          int l = max(1, a[i] - i + 1), r = min(n, a[i] + i - 1);
          dp[i][1] = (pre[r][0] - pre[l - 1][0] + mod) % mod;
          if (i > 1)
            dp[i][1] = (dp[i][1] + suf[i - 2][0]) % mod;
        }
      }
      else
      {
        dp[i][1] = (dp[i - 1][0] + dp[i - 1][1]) % mod;
        if (i > 1)
          dp[i][1] = (dp[i][1] + suf[i - 2][0]) % mod;
      }
      pre[i][0] = (pre[i - 1][0] + dp[i][0]) % mod;
      pre[i][1] = (pre[i - 1][1] + dp[i][1]) % mod;
      suf[i][0] = (suf[i - 1][0] + dp[i][0]) % mod;
      suf[i][1] = (suf[i - 1][1] + dp[i][1]) % mod;
    }
    cout << (dp[n][0] + dp[n][1]) % mod << "\n";
  }
  return 0;
}
