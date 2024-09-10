#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, k;
  cin >> n >> k;
  int h[n];
  for (int i = 0; i < n; i++)
    cin >> h[i];

  vector<int> dp(n, 0);
  dp[1] = abs(h[1] - h[0]);
  for (int i = 2; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      dp[i] = min()
    }
  }
}
int main()
{

  solve();

  return 0;
}