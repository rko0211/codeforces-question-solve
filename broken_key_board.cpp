#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  unordered_map<char, int> mp;
  for (int i = 0; i < k; i++)
  {
    char ch;
    cin >> ch;
    mp[ch]++;
  }
  // long long ans = 0;
  // long long int cnt = 0;
  // for (int i = 0; i < n; i++)
  // {
  //   if (mp[s[i]])
  //   {
  //     cnt++;
  //   }
  //   else
  //   {
  //     ans += (cnt * (cnt + 1) / 2);
  //     cnt = 0;
  //   }
  // }
  // ans += (cnt * (cnt + 1) / 2);
  // cout << ans << endl;

  vector<int> dp(n + 1, 0);
  dp[0] = 0;
  long long ans = 0;
  for (int i = 0; i < n; i++)
  {
    if (mp[s[i]])
    {
      int val = (dp[i] + 1);
      dp[i + 1] = val;
    }
    ans += dp[i + 1];
  }
  cout << ans << endl;
}
int main()
{

  solve();

  return 0;
}