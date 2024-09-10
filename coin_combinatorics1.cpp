#include <iostream>
#include <vector>

const int MOD = 1000000007;

int countWays(int n, int x, const std::vector<int> &coins)
{
  std::vector<int> dp(x + 1, 0);
  dp[0] = 1;
  // To produce sum x we need to follow dp[x] ways
  for (int i = 1; i <= x; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (coins[j] <= i)
      {
        dp[i] += dp[i - coins[j]];
        dp[i] %= MOD;
      }
    }
  }

  return dp[x];
}

int main()
{
  int n, x;
  std::cin >> n >> x;

  std::vector<int> coins(n);
  for (int i = 0; i < n; i++)
  {
    std::cin >> coins[i];
  }

  int ways = countWays(n, x, coins);
  std::cout << ways << std::endl;

  return 0;
}