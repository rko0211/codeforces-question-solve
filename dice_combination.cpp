#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
void solve()
{
  int n;
  cin >> n;
  vector<ll> dp(n + 1, 0);
  dp[0] = 1;
  dp[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    for (int j = 1; j <= 6; j++)
    {
      if (j > i)
        break;
      dp[i] = (dp[i] + dp[i - j]) % mod;
    }
  }
  cout << dp[n] << endl;
}
int main()
{

  solve();

  return 0;
}