#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
#define ll long long int
int countSubarraysWithZeroSum(vector<ll> &nums)
{
  unordered_map<ll, int> m;
  int cnt = 0;
  ll sum = 0;
  m[0] = 1;
  for (int i = 0; i < nums.size(); i++)
  {
    sum += nums[i];
    ll t = nums[i];
    ll tsum = sum;
    if (m.find(-1 * t) != m.end() || m.find(-1 * tsum) != m.end())
    {
      cnt++;
      m.clear();
      m[0] = 1;
      sum = nums[i];
    }
    m[sum]++;
    m[nums[i]]++;
  }

  return cnt;
}
void solve()
{
  int n;
  cin >> n;
  vector<ll> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  cout << countSubarraysWithZeroSum(v) << endl;
}
int main()
{

  solve();

  return 0;
}
