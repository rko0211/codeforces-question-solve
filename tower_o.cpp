#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAX_A = 6;
const ll INF = 1e18;
ll dp[70][MAX_A + 1], X, Y;
int A;

ll solve(ll N, int a)
{
  if (N == 0)
    return 0;
  if (dp[N][a] != -1)
    return dp[N][a];
  ll &ret = dp[N][a];
  ret = INF;
  if (a < A)
    ret = min(ret, X + solve(N / a, a + 1));
  ret = min(ret, Y * (N % a) + X + solve(N / a, a + 1));
  ret = min(ret, Y * (a - N % a) + X + solve(N / a + 1, a + 1));
  return ret;
}

int main()
{
  ll N;
  cin >> N >> A >> X >> Y;
  memset(dp, -1, sizeof dp);
  double ans = min(solve(N, 2), Y * N);
  cout << fixed << setprecision(15) << ans << endl;
  return 0;
}
