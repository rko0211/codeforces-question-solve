#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long int

const int MAX_VAL = 2 * 100000;
vector<int> log3(MAX_VAL + 1);
vector<int> sum(MAX_VAL + 1);
void precompute_log3()
{
  for (int i = 1; i <= MAX_VAL; ++i)
  {
    int cnt = 0;
    int t = i;
    while (t > 0)
    {
      t /= 3;
      cnt++;
    }
    log3[i] = cnt;
  }
  sum[0] = 0;

  for (int i = 1; i <= MAX_VAL; ++i)
  {
    sum[i] = sum[i - 1] + log3[i];
  }
}
void solve()
{
  ll l, r;
  cin >> l >> r;
  vector<pair<ll, ll>> nums;

  ll ans = 0;
  ans += (sum[r] - sum[l - 1]);
  ans += sum[l] - sum[l - 1];
  cout << ans << endl;
}

int main()
{
  precompute_log3();

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
